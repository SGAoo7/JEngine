#pragma once

#include <iostream>
#include <map>

#include "Scene.h"

//all scenes includes
#include "MainScene.h"

class Game;
class CustomRenderWindow;

class SceneManager
{
public:
	SceneManager(Game* game);
	~SceneManager();

	void StartCurrentScene();
	void UpdateCurrentScene();

	void RenderCurrentScene();

private:
	Game* game;
	CustomRenderWindow* window;


	std::map<int, Scene*> scenes;

	Scene* currentScene;

	///all scenes in game
	MainScene mainScene;
};

