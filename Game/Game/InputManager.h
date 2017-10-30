#pragma once

#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H

#include <SFML\Graphics.hpp>

#include <iostream>

class Game;

class InputManager
{
public:
	InputManager(Game* game);
	~InputManager();

	//update poll function
	void UpdatePollEvent();
	void UpdateBaicEvents();

	//key functions
	bool KeyPressed(sf::Keyboard::Key _key);
	bool KeyDown(sf::Keyboard::Key _key);
	bool KeyReleased(int _key);

private:
	sf::Event event;

	Game* game;
	sf::RenderWindow* window;

	bool keyPressed;
};

#endif
