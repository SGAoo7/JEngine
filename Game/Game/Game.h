#pragma once

#ifndef GAME_H
#define GAME_H

//component includes
#include "SceneManager.h"
#include "CustomRenderWindow.h"
#include "InputManager.h"

class Game
{
public:
	Game();
	~Game();

	///main functions for game
	void Update();

	CustomRenderWindow& GetWindowClass();
	SceneManager* GetSceneManager();
	InputManager& GetInputManager();

	//time
	float deltaTime;

private:
	//time
	sf::Clock clock;

	//main components
	CustomRenderWindow window;
	SceneManager sceneManager = SceneManager(this);
	InputManager input = InputManager(this);
};

#endif
