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

public:
	std::map<int, JSprite*> sprites;
};

