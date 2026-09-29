#include "OutlineComponent.h"

#include "Components/LineBatchComponent.h"
#include "Components/MeshComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SkinnedMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/SkeletalMesh.h"
#include "Engine/StaticMesh.h"
#include "InsertPassModule.h"
#include "InsertPassSubsystem.h"
#include "RawIndexBuffer.h"
#include "Rendering/MultiSizeIndexContainer.h"
#include "Rendering/SkeletalMeshLODRenderData.h"
#include "Rendering/SkeletalMeshRenderData.h"
#include "StaticMeshResources.h"

namespace OutlineStructurePrivate
{
	static constexpr int32 MaxEdgesPerMesh = 200000;
	static constexpr float WeldGridScale = 100.0f; // 1cm 网格焊接，去掉 UV 缝裂出来的重复点

	struct FEdgeFaces
	{
		int32 Face0 = INDEX_NONE;
		int32 Face1 = INDEX_NONE;
		bool bNonManifold = false;
	};

	static uint64 MakeEdgeKey(int32 A, int32 B)
	{
		if (A > B)
		{
			Swap(A, B);
		}
		return (uint64(uint32(A)) << 32) | uint32(B);
	}

	static FIntVector QuantizePosition(const FVector& Position)
	{
		return FIntVector(
			FMath::RoundToInt(Position.X * WeldGridScale),
			FMath::RoundToInt(Position.Y * WeldGridScale),
			FMath::RoundToInt(Position.Z * WeldGridScale));
	}

	/** 焊接顶点后，按相邻面夹角剔除四边形剖分对角线，只保留结构边。 */
	static bool BuildFeatureEdges(
		TArrayView<const FVector> SourcePositions,
		FIndexArrayView Indices,
		float CreaseAngleDegrees,
		TArray<FVector>& OutWeldedPositions,
		TArray<UOutlineComponent::FStructureEdge>& OutEdges,
		TArray<int32>& OutWeldToOriginal)
	{
		OutWeldedPositions.Reset();
		OutEdges.Reset();
		OutWeldToOriginal.Reset();

		const int32 NumSource = SourcePositions.Num();
		const int32 NumIndices = Indices.Num();
		if (NumSource <= 0 || NumIndices < 3)
		{
			return false;
		}

		TArray<int32> Remap;
		Remap.SetNumUninitialized(NumSource);
		TMap<FIntVector, int32> WeldMap;
		WeldMap.Reserve(NumSource);

		for (int32 Index = 0; Index < NumSource; ++Index)
		{
			const FIntVector Key = QuantizePosition(SourcePositions[Index]);
			if (const int32* Existing = WeldMap.Find(Key))
			{
				Remap[Index] = *Existing;
			}
			else
			{
				const int32 WeldedIndex = OutWeldedPositions.Num();
				WeldMap.Add(Key, WeldedIndex);
				Remap[Index] = WeldedIndex;
				OutWeldedPositions.Add(SourcePositions[Index]);
				OutWeldToOriginal.Add(Index);
			}
		}

		const int32 NumTris = NumIndices / 3;
		TArray<FVector> FaceNormals;
		FaceNormals.SetNumUninitialized(NumTris);

		TMap<uint64, FEdgeFaces> EdgeMap;
		EdgeMap.Reserve(NumTris * 2);

		auto AddEdgeFace = [&EdgeMap](int32 A, int32 B, int32 FaceIndex)
		{
			if (A == B)
			{
				return;
			}
			const uint64 Key = MakeEdgeKey(A, B);
			FEdgeFaces& Faces = EdgeMap.FindOrAdd(Key);
			if (Faces.Face0 == INDEX_NONE)
			{
				Faces.Face0 = FaceIndex;
			}
			else if (Faces.Face1 == INDEX_NONE)
			{
				if (Faces.Face0 != FaceIndex)
				{
					Faces.Face1 = FaceIndex;
				}
			}
			else if (Faces.Face0 != FaceIndex && Faces.Face1 != FaceIndex)
			{
				Faces.bNonManifold = true;
			}
		};

		for (int32 Tri = 0; Tri < NumTris; ++Tri)
		{
			const int32 I0 = Remap[Indices[Tri * 3 + 0]];
			const int32 I1 = Remap[Indices[Tri * 3 + 1]];
			const int32 I2 = Remap[Indices[Tri * 3 + 2]];
			if (I0 == I1 || I1 == I2 || I2 == I0)
			{
				FaceNormals[Tri] = FVector::ZeroVector;
				continue;
			}

			const FVector& P0 = OutWeldedPositions[I0];
			const FVector& P1 = OutWeldedPositions[I1];
			const FVector& P2 = OutWeldedPositions[I2];
			FaceNormals[Tri] = FVector::CrossProduct(P1 - P0, P2 - P0).GetSafeNormal();

			AddEdgeFace(I0, I1, Tri);
			AddEdgeFace(I1, I2, Tri);
			AddEdgeFace(I2, I0, Tri);
		}

		const float CosThreshold = FMath::Cos(FMath::DegreesToRadians(FMath::Clamp(CreaseAngleDegrees, 1.0f, 90.0f)));
		OutEdges.Reserve(FMath::Min(EdgeMap.Num(), MaxEdgesPerMesh));

		for (const TPair<uint64, FEdgeFaces>& Pair : EdgeMap)
		{
			if (OutEdges.Num() >= MaxEdgesPerMesh)
			{
				break;
			}

			const FEdgeFaces& Faces = Pair.Value;
			bool bKeep = false;
			if (Faces.bNonManifold || Faces.Face1 == INDEX_NONE)
			{
				// 边界边 / 非流形边：一定保留
				bKeep = true;
			}
			else
			{
				const FVector& N0 = FaceNormals[Faces.Face0];
				const FVector& N1 = FaceNormals[Faces.Face1];
				if (N0.IsNearlyZero() || N1.IsNearlyZero())
				{
					bKeep = true;
				}
				else
				{
					// 夹角大于阈值 → 结构折边；接近共面 → 四边形对角线，剔除
					const float Dot = FMath::Clamp(FVector::DotProduct(N0, N1), -1.0f, 1.0f);
					bKeep = Dot <= CosThreshold;
				}
			}

			if (bKeep)
			{
				const int32 A = int32(Pair.Key >> 32);
				const int32 B = int32(Pair.Key & 0xffffffffu);
				OutEdges.Add({ A, B });
			}
		}

		return OutEdges.Num() > 0;
	}

	static bool CacheStaticMesh(UStaticMeshComponent* MeshComp, float CreaseAngle, UOutlineComponent::FStructureMeshCache& OutCache)
	{
		UStaticMesh* Mesh = MeshComp ? MeshComp->GetStaticMesh() : nullptr;
		if (!Mesh || !Mesh->GetRenderData() || Mesh->GetRenderData()->LODResources.Num() == 0)
		{
			return false;
		}

		const FStaticMeshLODResources& LOD = Mesh->GetRenderData()->LODResources[0];
		const FPositionVertexBuffer& Positions = LOD.VertexBuffers.PositionVertexBuffer;
		const int32 NumVerts = Positions.GetNumVertices();
		if (NumVerts <= 0 || LOD.IndexBuffer.GetNumIndices() < 3)
		{
			return false;
		}

		TArray<FVector> SourcePositions;
		SourcePositions.SetNumUninitialized(NumVerts);
		for (int32 Index = 0; Index < NumVerts; ++Index)
		{
			SourcePositions[Index] = FVector(Positions.VertexPosition(Index));
		}

		OutCache.Source = MeshComp;
		OutCache.bSkinned = false;
		return BuildFeatureEdges(
			SourcePositions,
			LOD.IndexBuffer.GetArrayView(),
			CreaseAngle,
			OutCache.LocalPositions,
			OutCache.Edges,
			OutCache.WeldToOriginal);
	}

	static bool UpdateSkeletalPositions(USkeletalMeshComponent* MeshComp, UOutlineComponent::FStructureMeshCache& InOutCache)
	{
		USkeletalMesh* Mesh = MeshComp ? MeshComp->GetSkeletalMeshAsset() : nullptr;
		FSkeletalMeshRenderData* RenderData = Mesh ? Mesh->GetResourceForRendering() : nullptr;
		if (!RenderData || RenderData->LODRenderData.Num() == 0)
		{
			return false;
		}

		const FSkeletalMeshLODRenderData& LOD = RenderData->LODRenderData[0];
		const FSkinWeightVertexBuffer* SkinWeights = LOD.GetSkinWeightVertexBuffer();
		if (!SkinWeights)
		{
			return false;
		}

		TArray<FMatrix44f> RefToLocal;
		MeshComp->CacheRefToLocalMatrices(RefToLocal);
		TArray<FVector3f> Skinned;
		USkinnedMeshComponent::ComputeSkinnedPositions(MeshComp, Skinned, RefToLocal, LOD, *SkinWeights);

		for (int32 Welded = 0; Welded < InOutCache.WeldToOriginal.Num(); ++Welded)
		{
			const int32 Original = InOutCache.WeldToOriginal[Welded];
			if (Skinned.IsValidIndex(Original) && InOutCache.LocalPositions.IsValidIndex(Welded))
			{
				InOutCache.LocalPositions[Welded] = FVector(Skinned[Original]);
			}
		}
		return true;
	}

	static bool CacheSkeletalMesh(USkeletalMeshComponent* MeshComp, float CreaseAngle, UOutlineComponent::FStructureMeshCache& OutCache)
	{
		USkeletalMesh* Mesh = MeshComp ? MeshComp->GetSkeletalMeshAsset() : nullptr;
		FSkeletalMeshRenderData* RenderData = Mesh ? Mesh->GetResourceForRendering() : nullptr;
		if (!RenderData || RenderData->LODRenderData.Num() == 0)
		{
			return false;
		}

		const FSkeletalMeshLODRenderData& LOD = RenderData->LODRenderData[0];
		FMultiSizeIndexContainerData IndexData;
		LOD.MultiSizeIndexContainer.GetIndexBufferData(IndexData);
		const int32 NumVerts = LOD.GetNumVertices();
		if (NumVerts <= 0 || IndexData.Indices.Num() < 3)
		{
			return false;
		}

		const FSkinWeightVertexBuffer* SkinWeights = LOD.GetSkinWeightVertexBuffer();
		if (!SkinWeights)
		{
			return false;
		}

		TArray<FMatrix44f> RefToLocal;
		MeshComp->CacheRefToLocalMatrices(RefToLocal);
		TArray<FVector3f> Skinned;
		USkinnedMeshComponent::ComputeSkinnedPositions(MeshComp, Skinned, RefToLocal, LOD, *SkinWeights);

		TArray<FVector> SourcePositions;
		SourcePositions.SetNumUninitialized(NumVerts);
		const int32 CopyCount = FMath::Min(Skinned.Num(), NumVerts);
		for (int32 Index = 0; Index < CopyCount; ++Index)
		{
			SourcePositions[Index] = FVector(Skinned[Index]);
		}
		for (int32 Index = CopyCount; Index < NumVerts; ++Index)
		{
			SourcePositions[Index] = FVector::ZeroVector;
		}

		OutCache.Source = MeshComp;
		OutCache.bSkinned = true;
		const FIndexArrayView IndexView(IndexData.Indices.GetData(), IndexData.Indices.Num(), true);
		return BuildFeatureEdges(
			SourcePositions,
			IndexView,
			CreaseAngle,
			OutCache.LocalPositions,
			OutCache.Edges,
			OutCache.WeldToOriginal);
	}
}

UOutlineComponent::UOutlineComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.bTickEvenWhenPaused = true;
	bTickInEditor = true;
}

void UOutlineComponent::RegisterWithSubsystem()
{
	if (UWorld* World = GetWorld())
	{
		if (UInsertPassSubsystem* Subsystem = World->GetSubsystem<UInsertPassSubsystem>())
		{
			Subsystem->RegisterOutline(this);
		}
	}
}

void UOutlineComponent::SetScreenPixelEnabled(bool bEnabled)
{
	bEnableScreenPixel = bEnabled;
	ApplyOutlineState();
}

void UOutlineComponent::SetScreenPixelColor(FLinearColor InColor)
{
	ScreenPixelColor = InColor;
}

void UOutlineComponent::SetScreenPixelThickness(float InThickness)
{
	ScreenPixelThickness = FMath::Clamp(InThickness, 0.5f, 32.0f);
}

void UOutlineComponent::SetDepthNormalEnabled(bool bEnabled)
{
	bEnableDepthNormal = bEnabled;
	ApplyOutlineState();
}

void UOutlineComponent::SetDepthNormalColor(FLinearColor InColor)
{
	DepthNormalColor = InColor;
}

void UOutlineComponent::SetDepthNormalThickness(float InThickness)
{
	DepthNormalThickness = FMath::Clamp(InThickness, 0.5f, 32.0f);
}

void UOutlineComponent::SetStructureEnabled(bool bEnabled)
{
	bEnableStructure = bEnabled;
	bStructureCacheDirty = true;
	ApplyOutlineState();
}

void UOutlineComponent::SetStructureColor(FLinearColor InColor)
{
	StructureColor = InColor;
}

void UOutlineComponent::SetStructureThickness(float InThickness)
{
	StructureThickness = FMath::Clamp(InThickness, 0.0f, 32.0f);
}

void UOutlineComponent::SetStructureCreaseAngle(float InDegrees)
{
	StructureCreaseAngle = FMath::Clamp(InDegrees, 1.0f, 90.0f);
	bStructureCacheDirty = true;
	ApplyOutlineState();
}

void UOutlineComponent::ClearOutline()
{
	bEnableScreenPixel = false;
	bEnableDepthNormal = false;
	bEnableStructure = false;
	ApplyOutlineState();
}

void UOutlineComponent::SelectExclusive(bool bInScreenPixel, bool bInDepthNormal, bool bInStructure)
{
	if (UWorld* World = GetWorld())
	{
		if (UInsertPassSubsystem* Subsystem = World->GetSubsystem<UInsertPassSubsystem>())
		{
			Subsystem->SelectOutline(this, bInScreenPixel, bInDepthNormal, bInStructure);
			return;
		}
	}

	ClearOutline();
	SetScreenPixelEnabled(bInScreenPixel);
	SetDepthNormalEnabled(bInDepthNormal);
	SetStructureEnabled(bInStructure);
}

void UOutlineComponent::SetOutlineEnabled(bool bEnabled)
{
	SetScreenPixelEnabled(bEnabled);
}

void UOutlineComponent::SetCustomDepthEnabled(bool bEnabled)
{
	// Custom Depth 在组件注册期间保持开启；关闭描边时用 ClearOutline。
	if (bEnabled)
	{
		if (AllocatedStencilValue <= 0)
		{
			RegisterWithSubsystem();
		}
		ApplyOutlineState();
	}
	else if (!IsOutlineEnabled())
	{
		ApplyOutlineState();
	}
}

void UOutlineComponent::SetAllocatedStencilValue(int32 InStencilValue)
{
	AllocatedStencilValue = FMath::Clamp(InStencilValue, 0, 255);
	ApplyOutlineState();
}

void UOutlineComponent::UpdateStructureTickState()
{
	SetComponentTickEnabled(bEnableStructure && IsRegistered());
	if (!bEnableStructure)
	{
		ClearStructureLines();
	}
}

void UOutlineComponent::RebuildStructureCaches()
{
	StructureCaches.Reset();

	AActor* Owner = GetOwner();
	if (!Owner)
	{
		return;
	}

	TArray<UPrimitiveComponent*> Primitives;
	Owner->GetComponents<UPrimitiveComponent>(Primitives);

	for (UPrimitiveComponent* Primitive : Primitives)
	{
		if (!Primitive || !Primitive->IsRegistered() || Primitive == StructureLineBatch)
		{
			continue;
		}

		FStructureMeshCache Cache;
		bool bOk = false;
		if (UStaticMeshComponent* StaticMesh = Cast<UStaticMeshComponent>(Primitive))
		{
			bOk = OutlineStructurePrivate::CacheStaticMesh(StaticMesh, StructureCreaseAngle, Cache);
		}
		else if (USkeletalMeshComponent* SkeletalMesh = Cast<USkeletalMeshComponent>(Primitive))
		{
			bOk = OutlineStructurePrivate::CacheSkeletalMesh(SkeletalMesh, StructureCreaseAngle, Cache);
		}

		if (bOk)
		{
			StructureCaches.Add(MoveTemp(Cache));
		}
	}

	bStructureCacheDirty = false;

	int32 TotalEdges = 0;
	for (const FStructureMeshCache& Cache : StructureCaches)
	{
		TotalEdges += Cache.Edges.Num();
	}
	UE_LOG(LogInsertPass, Verbose, TEXT("结构描边缓存 %d 个网格，共 %d 条边"), StructureCaches.Num(), TotalEdges);
}

void UOutlineComponent::ClearStructureLines()
{
	if (StructureLineBatch)
	{
		StructureLineBatch->Flush();
	}
}

void UOutlineComponent::DrawStructureLines()
{
	AActor* Owner = GetOwner();
	if (!Owner)
	{
		return;
	}

	if (!StructureLineBatch)
	{
		StructureLineBatch = NewObject<ULineBatchComponent>(Owner, NAME_None, RF_Transient);
		StructureLineBatch->bCalculateAccurateBounds = false;
		StructureLineBatch->SetMobility(EComponentMobility::Movable);
		StructureLineBatch->SetupAttachment(Owner->GetRootComponent());
		StructureLineBatch->RegisterComponent();
	}

	if (bStructureCacheDirty || StructureCaches.Num() == 0)
	{
		RebuildStructureCaches();
	}

	StructureLineBatch->Flush();

	TArray<FBatchedLine> Lines;
	const float Thickness = StructureThickness;
	const uint8 DepthPriority = static_cast<uint8>(SDPG_Foreground);

	for (FStructureMeshCache& Cache : StructureCaches)
	{
		UPrimitiveComponent* Source = Cache.Source.Get();
		if (!Source)
		{
			bStructureCacheDirty = true;
			continue;
		}

		if (Cache.bSkinned)
		{
			if (USkeletalMeshComponent* SkeletalMesh = Cast<USkeletalMeshComponent>(Source))
			{
				OutlineStructurePrivate::UpdateSkeletalPositions(SkeletalMesh, Cache);
			}
		}

		const FTransform LocalToWorld = Source->GetComponentTransform();
		Lines.Reserve(Lines.Num() + Cache.Edges.Num());
		for (const FStructureEdge& Edge : Cache.Edges)
		{
			if (!Cache.LocalPositions.IsValidIndex(Edge.A) || !Cache.LocalPositions.IsValidIndex(Edge.B))
			{
				continue;
			}
			Lines.Emplace(
				LocalToWorld.TransformPosition(Cache.LocalPositions[Edge.A]),
				LocalToWorld.TransformPosition(Cache.LocalPositions[Edge.B]),
				StructureColor,
				0.0f,
				Thickness,
				DepthPriority);
		}
	}

	if (Lines.Num() > 0)
	{
		StructureLineBatch->DrawLines(Lines);
	}
}

void UOutlineComponent::ApplyOutlineState()
{
	AActor* Owner = GetOwner();
	if (!Owner || !IsRegistered())
	{
		return;
	}

	const bool bKeepCustomDepth = AllocatedStencilValue > 0;
	const int32 StencilValue = (IsOutlineEnabled() && bKeepCustomDepth) ? AllocatedStencilValue : 0;

	TArray<UPrimitiveComponent*> Primitives;
	Owner->GetComponents<UPrimitiveComponent>(Primitives);

	for (UPrimitiveComponent* Primitive : Primitives)
	{
		if (!Primitive || !Primitive->IsRegistered() || Primitive == StructureLineBatch)
		{
			continue;
		}

		Primitive->SetRenderCustomDepth(bKeepCustomDepth);
		Primitive->SetCustomDepthStencilValue(StencilValue);

		if (UMeshComponent* Mesh = Cast<UMeshComponent>(Primitive))
		{
			if (UMaterialInterface* Overlay = Mesh->GetOverlayMaterial())
			{
				if (Overlay->GetPathName().StartsWith(TEXT("/InsertPass")) || Overlay->GetOuter() == this)
				{
					Mesh->SetOverlayMaterial(nullptr);
				}
			}
		}
	}

	UpdateStructureTickState();
	if (bEnableStructure)
	{
		DrawStructureLines();
	}
}

void UOutlineComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (bEnableStructure)
	{
		DrawStructureLines();
	}
}

void UOutlineComponent::OnRegister()
{
	Super::OnRegister();
	RegisterWithSubsystem();
	ApplyOutlineState();
}

void UOutlineComponent::OnUnregister()
{
	if (UWorld* World = GetWorld())
	{
		if (UInsertPassSubsystem* Subsystem = World->GetSubsystem<UInsertPassSubsystem>())
		{
			Subsystem->UnregisterOutline(this);
		}
	}

	ClearStructureLines();
	if (StructureLineBatch)
	{
		StructureLineBatch->DestroyComponent();
		StructureLineBatch = nullptr;
	}
	StructureCaches.Reset();

	if (AActor* Owner = GetOwner())
	{
		TArray<UPrimitiveComponent*> Primitives;
		Owner->GetComponents<UPrimitiveComponent>(Primitives);
		for (UPrimitiveComponent* Primitive : Primitives)
		{
			if (!Primitive)
			{
				continue;
			}
			Primitive->SetRenderCustomDepth(false);
			Primitive->SetCustomDepthStencilValue(0);
		}
	}

	AllocatedStencilValue = 0;
	Super::OnUnregister();
}

void UOutlineComponent::BeginPlay()
{
	Super::BeginPlay();
	RegisterWithSubsystem();
	ApplyOutlineState();
}

#if WITH_EDITOR
void UOutlineComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	bStructureCacheDirty = true;
	ApplyOutlineState();
}
#endif
