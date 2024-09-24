#include "wbPlayScene.h"
#include "wbGameObject.h"
#include "wbPlayer.h"
#include "wbTransform.h"
#include "wbSpriteRenderer.h"

namespace wb
{
	PlayScene::PlayScene()
	{
	}
	PlayScene::~PlayScene()
	{
	}
	void PlayScene::Initialize()
	{

		/*for (size_t i = 0; i < 100; i++)
		{
			GameObject* obj = new GameObject();
			obj->SetPosition(rand() % 1600, rand() % 900);
			AddGameObject(obj);
		}*/
		{
			Player* p1 = new Player();
			Transform* tr = p1->AddComponent<Transform>();
			tr->SetPos(800, 450);
			
			tr->SetName(L"TR");
			
			SpriteRenderer* sr
				= p1->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");
			
			AddGameObject(p1);
		}

		{
			Player* pl = new Player();
			Transform* tr
				= pl->AddComponent<Transform>();
			tr->SetPos(300, 450);
			
			tr->SetName(L"TR");
			
			SpriteRenderer* sr
				= pl->AddComponent<SpriteRenderer>();
			
			sr->SetName(L"SR");
			
			AddGameObject(pl);
		}
		
		{
			Player* pl = new Player();
			Transform* tr
				= pl->AddComponent<Transform>();
			tr->SetPos(100, 650);
			
			tr->SetName(L"TR");
			
			SpriteRenderer* sr
				= pl->AddComponent<SpriteRenderer>();
			
			sr->SetName(L"SR");
			
			AddGameObject(pl);
		}

	}
	void PlayScene::Update()
	{
		Scene::Update();
	}
	void PlayScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void PlayScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}
}