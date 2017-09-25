#pragma once

#include <iostream>
#include <map>

#include "Scene.h"

//all scenes includes
#include "MainScene.h"


class SceneManager
{
public:
	SceneManager();
	~SceneManager();

private:
	std::map<int, Scene*> scenes;

	Scene* currentScene;

	MainScene mainScene;
};

