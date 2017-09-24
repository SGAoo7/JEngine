#pragma once

#include <iostream>
#include <time.h>
#include <string>

#include "InputManager.h"
#include "SceneManager.h"
#include "CustomRenderWindow.h"

class Game {
public:
	~Game();

	static Game* GetInstance();

	void Start();
	void Update();

	void SetGameOver(bool state);
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
	CustomRenderWindow window;
};