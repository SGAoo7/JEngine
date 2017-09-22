#pragma once

#include <iostream>
#include <time.h>

#include "InputManager.h"
#include "SceneManager.h"
#include "Window.h"

class Game {
public:
	~Game();

	static Game* GetInstance();

	void Start();
	void Update();

	bool GetGameOver();

private:
	Game();

	void Render();
	void HandleInput();

private:
	bool isGameOver;

	clock_t deltaTime;

	InputManager input = InputManager(this);
	SceneManager sceneManager = SceneManager(this);
	Window window;
};