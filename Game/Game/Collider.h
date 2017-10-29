#pragma once

#include <iostream>
#include <map>

#include "Component.h"
#include "Sprite.h"

using namespace JE;

class Collider : public Component
{
public:
	Collider(Sprite& sprite, GameObject& gameObject);
	~Collider();

	void Start();
	void Update(float deltaTime);

	void FindCollideableObjects();

	///getters
	Sprite& GetSprite();

public:
	std::map<int, Collider&> collideableObjects;
	int collideableObjectsIndex;

private:
	Sprite& sprite;
};

