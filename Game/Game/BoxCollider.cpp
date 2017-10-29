#include "BoxCollider.h"

using namespace JE;

BoxCollider::BoxCollider(Sprite& sprite, GameObject& gameObject) : Collider(sprite, gameObject) {
}


BoxCollider::~BoxCollider()
{
}

GameObject* BoxCollider::Collide() {
	for (auto it = collideableObjects.begin(); it != collideableObjects.end(); ++it) {
		if (GetSprite().GetSprite().getGlobalBounds().intersects(it->second.GetSprite().GetSprite().getGlobalBounds())) {
			return &it->second.GetGameObject();
		}
	}

	return nullptr;
}
