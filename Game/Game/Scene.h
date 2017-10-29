#pragma once

#include "InputManager.h"

#include "Sprite.h"
#include "Animation.h"
#include "Text.h"
#include "Font.h"
#include "AudioSource.h"
#include "BoxCollider.h"

#include <map>
#include <list>
#include <vector>

class GameObject;

using namespace JE;

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

	InputManager* Input;

private:
	int gameObjectLayerIndex;
};

