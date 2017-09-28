#pragma once

#include <SFML\Graphics.hpp>
#include <map>
#include "Scene.h"

class JSprite;

class JCollider
{
public:
	JCollider(JSprite* _sprite, Scene* _scene, bool _isTrigger);
	~JCollider();

	JSprite* Collide();
	void CheckPositionRelativeToObject();
	void SetJSprites();

	JSprite* GetThisInteractable();
	bool IsTrigger();
public:
	bool canMoveUp, canMoveDown, canMoveRight, canMoveLeft;

private:
	JSprite* thisInteractable;
	bool isTrigger;

	std::map<int, JSprite*> collidableObjects;

	Scene* scene;
};
