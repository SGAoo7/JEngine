#pragma once

#include "JAudioSource.h"

#include <map>

#include "JSprite.h"

class Scene
{
public:
	Scene();
	~Scene();

	virtual void Start();
	virtual void Update();

	void AddSpriteToRenderLayer(JSprite* jSprite);
public:
	std::map<int, JSprite*> sprites;
	int spriteRenderLayerIndex;
};

