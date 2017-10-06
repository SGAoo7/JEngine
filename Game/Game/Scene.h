#pragma once

#include "JAudioSource.h"
#include "JSprite.h"

#include <map>
#include <list>

class GameObject;

class Scene
{
public:
	Scene();
	~Scene();

	virtual void Start();
	virtual void Update();

	void AddSpriteToRenderLayer(JSprite* jSprite);

	void AddToGameObjectList(GameObject* gameObject);

public:
	std::map<int, GameObject*> GameObjects;

	std::map<int, JSprite*> sprites;
	int spriteRenderLayerIndex;

private:
	int gameObjectLayerIndex;
};

