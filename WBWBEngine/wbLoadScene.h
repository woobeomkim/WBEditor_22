#pragma once
#include "wbSceneManager.h"
#include "wbPlayScene.h"

//#ifdef _DEBUG
//#pragma comment(lib,"..\\x64\\Debug\\WBWBEngine_Source")
//#else
//#pragma comment(lib,"..\\x64\\Release\\WBWBEngine_Source")
//#endif

namespace wb
{
	void LoadScene()
	{
		SceneManager::CreateScene<PlayScene>(L"PlayScene");
		//SceneManager::CreateScene<EndScene>(L"EndScene");
		//SceneManager::CreateScene<TitleScene>(L"TitleScene");

		SceneManager::LoadScene(L"PlayScene");
	}
}