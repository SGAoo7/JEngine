#include "InputManager.h"
#include "Game.h"

InputManager::InputManager(Game* game) : game(game)
{
	window = &game->GetWindowClass()->window;
	keyPressed = false;
}


InputManager::~InputManager()
{
}

void InputManager::UpdatePollEvent()
{
	sf::Event _event;

	if (window->pollEvent(_event)) {
		if (_event.type == sf::Event::Closed) {
			game->GetWindowClass()->isDone = true;
		}
	}

	event = _event;

	UpdateBaicEvents();
}

void InputManager::UpdateBaicEvents()
{
	if (event.type == sf::Event::KeyReleased) {
		keyPressed = false;
	}
}

bool InputManager::KeyPressed(sf::Keyboard::Key _key)
{
	if (event.key.code == _key && event.type == sf::Event::KeyPressed && !keyPressed) {
		keyPressed = true;
		return true;
	}
	else {
		return false;
	}


}

bool InputManager::KeyDown(sf::Keyboard::Key _key)
{
	if (event.key.code == _key && event.type == sf::Event::KeyPressed) {
		keyPressed = true;
		return true;
	}
	else {
		return false;
	}
}

bool InputManager::KeyReleased(int _key)
{
	if (event.key.code == _key && event.type == sf::Event::KeyReleased) {
		return true;
	}
	else {
		return false;
	}
}
