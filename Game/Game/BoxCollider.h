#pragma once

#include "Collider.h"

namespace JE {
	class BoxCollider : public Collider {
	public:
		BoxCollider(Sprite& sprite, GameObject& gameObject);
		~BoxCollider();

		GameObject* Collide();
	};
}
