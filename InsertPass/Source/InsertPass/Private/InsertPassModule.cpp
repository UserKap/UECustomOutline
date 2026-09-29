#include "InsertPassModule.h"

#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "ShaderCore.h"

DEFINE_LOG_CATEGORY(LogInsertPass);

/*
启动描边模块
添加描边模块的着色器目录到着色器目录映射中，
确保引擎能够正确加载描边模块的着色器
*/
void FInsertPassModule::StartupModule()
{
	const TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("InsertPass"));
	if (!Plugin.IsValid())
	{
		return;
	}

	const FString PluginShaderDir = FPaths::Combine(Plugin->GetBaseDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping(TEXT("/InsertPass"), PluginShaderDir);
}

void FInsertPassModule::ShutdownModule()
{
}

IMPLEMENT_MODULE(FInsertPassModule, InsertPass)
