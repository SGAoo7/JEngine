#pragma once

#include <iostream>
#include <map>

#include "ExampleScene.h"

class Scene;
class Game;

class SceneManager
{
public:
	SceneManager(Game* game);
	~SceneManager();

	void StartScene();
	void UpdateScene();

public:
	Game* game;

	std::map<int, Scene*> scenes;
	Scene* currentScene;

private:
	ExampleScene exampleScene;
};

