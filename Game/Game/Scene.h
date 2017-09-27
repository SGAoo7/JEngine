#pragma once

#include <iostream>
#include <map>

#include "Game.h"
#include "JAudioSource.h"
#include "JSprite.h"

class Scene
{
public:
	Scene();
	~Scene();

	virtual void Start();
	virtual void Update();

	//sprites
	void AddSpriteToRenderMap(JSprite* sprite);

public:
	//components

	//sprites
	std::map<int, JSprite*> sprites;
	int spriteRenderIndex;
};

