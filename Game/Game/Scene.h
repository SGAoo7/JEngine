#pragma once

#ifndef SCENE_H
#define SCENE_H

#include "CustomRenderWindow.h"
#include "GameObject.h"
#include "JEComponents.h"

#include <map>
#include <list>
#include <vector>

class Scene
{
public:
	Scene();
	~Scene();

	virtual void Start();
	virtual void Update(float deltaTime);

	void AddToGameObjectList(GameObject* gameObject);
	GameObject* FindGameObjectByName(std::string gameObjectName);

public:
	std::map<int, GameObject*> GameObjects;

private:
	int gameObjectLayerIndex;
};

#endif
