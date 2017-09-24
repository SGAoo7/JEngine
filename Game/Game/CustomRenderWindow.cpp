#include "CustomRenderWindow.h"
#include "Game.h"


CustomRenderWindow::CustomRenderWindow() {
}

void CustomRenderWindow::Init(Game * game)
{
	this->game = game;
}

void CustomRenderWindow::InitRenderWindow(int width, int heigth, sf::String windowName)
{
	window.create(sf::VideoMode(width, heigth), windowName, sf::Style::Close);
}

