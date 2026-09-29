#pragma once

#include "Subsystems/WorldSubsystem.h"
#include "InsertPassSubsystem.generated.h"

class AActor;
class FInsertPassSceneViewExtension;
class UOutlineComponent;

UCLASS(BlueprintType)
class INSERTPASS_API UInsertPassSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual bool DoesSupportWorldType(const EWorldType::Type WorldType) const override;

	void RegisterOutline(UOutlineComponent* Component);
	void UnregisterOutline(UOutlineComponent* Component);

	/** 只要还有描边组件挂着，视口扩展就保持活跃（便于每帧清空快照）。 */
	bool HasRegisteredOutline() const;

	bool HasEnabledOutline() const;

	/** 渲染前强制把所有组件的 Custom Depth 状态与开关对齐，再收集启用中的实例。 */
	void SyncAndCollectEnabledOutlines(TArray<UOutlineComponent*>& OutComponents);

	/** 关掉当前世界里所有描边组件（不限 Actor 类型）。 */
	UFUNCTION(BlueprintCallable, Category = "OutlineSystem")
	void ClearAllOutlines();

	/**
	 * 互斥选中描边组件：先关掉同世界其他 Actor 上的描边，再打开 Target。
	 * 不限蓝图类，只要挂了描边组件都会被关掉。
	 */
	UFUNCTION(BlueprintCallable, Category = "OutlineSystem")
	void SelectOutline(
		UOutlineComponent* Target,
		bool bEnableScreenPixel = true,
		bool bEnableDepthNormal = false,
		bool bEnableStructure = false);

	/**
	 * 互斥选中某个 Actor：自动找它身上的描边组件。
	 * 蓝图里点到任意 Actor 时用这个最方便。
	 */
	UFUNCTION(BlueprintCallable, Category = "OutlineSystem")
	void SelectOutlineActor(
		AActor* TargetActor,
		bool bEnableScreenPixel = true,
		bool bEnableDepthNormal = false,
		bool bEnableStructure = false);

private:
	void EnsureCustomStencilEnabled();
	int32 AllocateStencilValue();
	void ReleaseStencilValue(int32 StencilValue);
	void CompactOutlines();
	void GatherWorldOutlineComponents(TArray<UOutlineComponent*>& OutComponents);

	TSharedPtr<FInsertPassSceneViewExtension, ESPMode::ThreadSafe> ViewExtension;
	TArray<TWeakObjectPtr<UOutlineComponent>> OutlineComponents;
	TBitArray<> UsedStencilValues;
};
