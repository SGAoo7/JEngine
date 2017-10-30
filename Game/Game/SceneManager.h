#pragma once

#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H

#include <iostream>
#include <map>

//all scenes includes
#include "MainScene.h"

class Game;

class SceneManager
{
public:
	SceneManager(Game* game);
	~SceneManager();

	void StartCurrentScene();
	void UpdateCurrentScene(float deltaTime);

	void RenderCurrentScene();

private:
	Game* game;
	CustomRenderWindow* window;

	std::map<int, Scene*> scenes;

	Scene* currentScene;

	///all scenes in game
	MainScene mainScene;
};

#endif
