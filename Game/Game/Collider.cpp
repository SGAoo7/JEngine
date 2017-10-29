#include "Collider.h"
#include "Scene.h"

using namespace JE;

Collider::Collider(Sprite& sprite, GameObject& gameObject) : Component(gameObject), sprite(sprite) {
	sprite.SetHasCollider(true);
	collideableObjectsIndex = 0;
}


Collider::~Collider()
{
}

void Collider::Start() {
	Component::Start();
}

void Collider::Update(float deltaTime) {
	Component::Update(deltaTime);

	FindCollideableObjects();
}

void Collider::FindCollideableObjects() {
	collideableObjects.clear();
	collideableObjectsIndex = 0;

	for (auto it = GetScene().GameObjects.begin(); it != GetScene().GameObjects.end(); it++) {
		for (auto it2 = it->second->Components.begin(); it2 != it->second->Components.end(); it2++) {
			Collider* collider = dynamic_cast<Collider*>(it2->second);

			if (collider) {
				if (collider != this) {
					collideableObjects.insert(std::pair<int, Collider&>(collideableObjectsIndex, *collider));
					collideableObjectsIndex++;
				}
			}
		}
	}
}

Sprite & Collider::GetSprite() {
	return sprite;
}
