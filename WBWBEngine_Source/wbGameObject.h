#pragma once
#include "CommonInclude.h"
#include "wbComponent.h"

namespace wb
{
	class GameObject
	{
	public:
		GameObject();
		~GameObject();

		//void Update();
		//void LateUpdate();
		//void Render(HDC hdc);
		virtual void Initialize();
		virtual void Update();
		virtual void LateUpdate();
		virtual void Render(HDC hdc);

		/*void SetPosition(float x, float y)
		{
			mX = x;
			mY = y;
		}*/
		template<typename T>
		T* AddComponent()
		{
			T* comp = new T();
			comp->SetOwner(this);
			mComponents.push_back(comp);

			return comp;
		}

		template<typename T>
		T* GetComponent()
		{
			T* component = nullptr;
			for (Component* comp : mComponents)
			{
				component = dynamic_cast<T*>(comp);
				if (component)
					break;
			}
			return component;
		}

		//float GetPositionX() { return mX; }
		//float GetPositionY() { return mY; }
	private:
		// 게임 오브젝트의 좌표
		//float mX;
		//float mY;
		std::vector<Component*> mComponents;
	};
}
