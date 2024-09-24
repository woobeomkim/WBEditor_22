#pragma once
#include "wbEntity.h"
#include "wbComponent.h"

namespace wb
{
	//struct Pos
	//{
	//	int mX;
	//	int mY;
	//};

	using namespace math;

	class Transform : public Component
	{
	public:
		Transform();
		~Transform();

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;

		//void SetPos(int x, int y) { mX = x; mY = y; }
		//int GetX() { return mX; }
		//int GetY() { return mY; }
		void SetPos(Vector2 pos) { mPosition.x = pos.x; mPosition.y = pos.y; }
		Vector2 GetPosition() { return mPosition; }
	private:
		//int mX;
		//int mY;
		Vector2 mPosition;
	};
}

