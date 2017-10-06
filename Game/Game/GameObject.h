#pragma once

#include <iostream>
#include <string>
#include <map>

#include "Component.h"
#include "Scene.h"

class GameObject
{
public:
	GameObject(std::string name, Scene* scene);
	~GameObject();

	std::string Name;
	std::map<int, Component*> Components;
	bool Active;

public:
	void AddComponent(Component* component);

private:
	Scene* scene;

	int componentIndex;
};

