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

	void StartCurrentScene();
	void UpdateCurrentScene();

private:
	std::map<int, Scene*> scenes;

	Scene* currentScene;

	///all scenes in game
	MainScene mainScene;
};

