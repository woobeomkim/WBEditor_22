#pragma once
#include "wbEntity.h"
#include "wbGameObject.h"

namespace wb
{
	class Scene : public Entity
	{
	public:
		Scene();
		~Scene();
		
		virtual void Initialize();
		virtual void Update();
		virtual void LateUpdate();
		virtual void Render(HDC hdc);
	
		void AddGameObject(GameObject* gameObject);

	protected:
		std::vector<GameObject*> mGameObjects;
	};
}
