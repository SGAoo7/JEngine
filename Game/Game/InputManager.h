#pragma once

#include <iostream>
#include <Windows.h>

enum Keys {
	Up,
	Down,
	Left,
	Right
};

class Game;

class InputManager
{
public:
	InputManager(Game* game);
	~InputManager();

	void Start();

	//update poll function
	void UpdatePollEvent(UINT key);
	void UpdateBaicEvents();

	//key functions
	bool KeyPressed();
	bool KeyDown(Keys key);
	bool KeyReleased(UINT key);

	//mouse functions
	bool OnMouseRelease();
	bool OnMouse();

private:
	UINT KeyToUINT(Keys key);

private:
	Game* game;

	UINT currentKey;
	bool keyPressed;
};
