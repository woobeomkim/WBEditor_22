#pragma once
#include "..\\WBWBEngine_Source\\wbGameObject.h"

namespace wb
{
	class Player : public GameObject
	{
	public:
		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;

	private:

	};
}

