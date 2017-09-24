#pragma once

#include <iostream>
#include <string>

#include <SFML\Graphics.hpp>

class Game;

class CustomRenderWindow
{
public:
	CustomRenderWindow();

	void Init(Game* game);

	void InitRenderWindow(int width, int heigth, sf::String windowName);

private:
	Game* game;
	sf::RenderWindow window;
};

