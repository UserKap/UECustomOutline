#include "InsertPassSubsystem.h"

#include "HAL/IConsoleManager.h"
#include "InsertPassModule.h"
#include "InsertPassSceneViewExtension.h"
#include "OutlineComponent.h"
#include "SceneUtils.h"
#include "SceneViewExtension.h"
#include "UObject/UObjectIterator.h"

void UInsertPassSubsystem::EnsureCustomStencilEnabled()
{
	static bool bApplied = false;
	if (bApplied)
	{
		return;
	}
	bApplied = true;

	if (IConsoleVariable* CustomDepth = IConsoleManager::Get().FindConsoleVariable(TEXT("r.CustomDepth")))
	{
		if (CustomDepth->GetInt() != 3)
		{
			UE_LOG(LogInsertPass, Log, TEXT("描边需要带模板的 Custom Depth，已把 r.CustomDepth 设为 3。"));
			CustomDepth->Set(3, ECVF_SetByCode);
		}
	}

	if (IConsoleVariable* Jitter = IConsoleManager::Get().FindConsoleVariable(TEXT("r.CustomDepthTemporalAAJitter")))
	{
		if (Jitter->GetInt() != 1)
		{
			Jitter->Set(1, ECVF_SetByCode);
		}
	}
}

int32 UInsertPassSubsystem::AllocateStencilValue()
{
	if (UsedStencilValues.Num() < 256)
	{
		UsedStencilValues.Init(false, 256);
	}

	for (int32 Stencil = 1; Stencil < 256; ++Stencil)
	{
		if (!UsedStencilValues[Stencil])
		{
			UsedStencilValues[Stencil] = true;
			return Stencil;
		}
	}

	UE_LOG(LogInsertPass, Warning, TEXT("描边 Stencil 已用尽（1-255），新的描边不会写入模板。"));
	return 0;
}

void UInsertPassSubsystem::ReleaseStencilValue(int32 StencilValue)
{
	if (StencilValue > 0 && StencilValue < UsedStencilValues.Num())
	{
		UsedStencilValues[StencilValue] = false;
	}
}

/*
清理描边组件
*/
void UInsertPassSubsystem::CompactOutlines()
{
	OutlineComponents.RemoveAll([](const TWeakObjectPtr<UOutlineComponent>& Existing)
	{
		return !Existing.IsValid();
	});
}

/*
初始化描边系统
*/
void UInsertPassSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	EnsureCustomStencilEnabled();
	UsedStencilValues.Init(false, 256);
	ViewExtension = FSceneViewExtensions::NewExtension<FInsertPassSceneViewExtension>(GetWorld(), this);
}

/*
销毁描边系统
*/
void UInsertPassSubsystem::Deinitialize()
{
	ViewExtension.Reset();
	OutlineComponents.Reset();
	UsedStencilValues.Reset();
	Super::Deinitialize();
}

/*
检查描边系统是否支持当前世界类型
*/
bool UInsertPassSubsystem::DoesSupportWorldType(const EWorldType::Type WorldType) const
{
	return WorldType == EWorldType::Game
		|| WorldType == EWorldType::PIE
		|| WorldType == EWorldType::Editor;
}

/*
注册描边组件到描边系统中
*/
void UInsertPassSubsystem::RegisterOutline(UOutlineComponent* Component)
{
	if (!Component)
	{
		return;
	}

	CompactOutlines();

	for (const TWeakObjectPtr<UOutlineComponent>& Existing : OutlineComponents)
	{
		if (Existing.Get() == Component)
		{
			if (Component->GetStencilValue() <= 0)
			{
				Component->SetAllocatedStencilValue(AllocateStencilValue());
			}
			return;
		}
	}

	OutlineComponents.Add(Component);

	if (Component->GetStencilValue() <= 0)
	{
		Component->SetAllocatedStencilValue(AllocateStencilValue());
	}
}

/*
取消注册描边组件到描边系统中
*/
void UInsertPassSubsystem::UnregisterOutline(UOutlineComponent* Component)
{
	if (Component)
	{
		ReleaseStencilValue(Component->GetStencilValue());
	}

	OutlineComponents.RemoveAll([Component](const TWeakObjectPtr<UOutlineComponent>& Existing)
	{
		return !Existing.IsValid() || Existing.Get() == Component;
	});
}

/*
检查描边系统中是否有注册的描边组件
*/
bool UInsertPassSubsystem::HasRegisteredOutline() const
{
	for (const TWeakObjectPtr<UOutlineComponent>& Existing : OutlineComponents)
	{
		if (Existing.IsValid())
		{
			return true;
		}
	}
	return false;
}

/*
检查描边系统中是否有启用的描边组件
*/
bool UInsertPassSubsystem::HasEnabledOutline() const
{
	for (const TWeakObjectPtr<UOutlineComponent>& Existing : OutlineComponents)
	{
		const UOutlineComponent* Component = Existing.Get();
		if (Component && Component->IsOutlineEnabled() && Component->GetStencilValue() > 0)
		{
			return true;
		}
	}
	return false;
}

/*
同步并收集启用的描边组件
*/
void UInsertPassSubsystem::SyncAndCollectEnabledOutlines(TArray<UOutlineComponent*>& OutComponents)
{
	OutComponents.Reset();
	CompactOutlines();

	for (const TWeakObjectPtr<UOutlineComponent>& Existing : OutlineComponents)
	{
		UOutlineComponent* Component = Existing.Get();
		if (!Component)
		{
			continue;
		}

		Component->ApplyOutlineState();

		if (Component->IsOutlineEnabled() && Component->GetStencilValue() > 0)
		{
			OutComponents.Add(Component);
		}
	}
}

void UInsertPassSubsystem::ClearAllOutlines()
{
	TArray<UOutlineComponent*> Components;
	GatherWorldOutlineComponents(Components);
	for (UOutlineComponent* Component : Components)
	{
		Component->ClearOutline();
	}
}

void UInsertPassSubsystem::GatherWorldOutlineComponents(TArray<UOutlineComponent*>& OutComponents)
{
	OutComponents.Reset();
	CompactOutlines();

	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	TSet<UOutlineComponent*> Unique;
	for (const TWeakObjectPtr<UOutlineComponent>& Existing : OutlineComponents)
	{
		if (UOutlineComponent* Component = Existing.Get())
		{
			Unique.Add(Component);
		}
	}

	// 不限 Actor 蓝图类：把当前世界里所有描边组件都扫进来
	for (TObjectIterator<UOutlineComponent> It; It; ++It)
	{
		UOutlineComponent* Component = *It;
		if (!Component || Component->GetWorld() != World || !Component->IsRegistered())
		{
			continue;
		}
		Unique.Add(Component);
		RegisterOutline(Component);
	}

	OutComponents = Unique.Array();
}

void UInsertPassSubsystem::SelectOutline(
	UOutlineComponent* Target,
	bool bEnableScreenPixel,
	bool bEnableDepthNormal,
	bool bEnableStructure)
{
	TArray<UOutlineComponent*> Components;
	GatherWorldOutlineComponents(Components);

	for (UOutlineComponent* Component : Components)
	{
		if (!Component || Component == Target)
		{
			continue;
		}
		Component->ClearOutline();
	}

	if (!Target)
	{
		return;
	}

	if (Target->GetWorld() == GetWorld())
	{
		RegisterOutline(Target);
	}

	Target->SetScreenPixelEnabled(bEnableScreenPixel);
	Target->SetDepthNormalEnabled(bEnableDepthNormal);
	Target->SetStructureEnabled(bEnableStructure);
}

void UInsertPassSubsystem::SelectOutlineActor(
	AActor* TargetActor,
	bool bEnableScreenPixel,
	bool bEnableDepthNormal,
	bool bEnableStructure)
{
	UOutlineComponent* Target = TargetActor
		? TargetActor->FindComponentByClass<UOutlineComponent>()
		: nullptr;
	SelectOutline(Target, bEnableScreenPixel, bEnableDepthNormal, bEnableStructure);
}
