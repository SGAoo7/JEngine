#include "InputManager.h"
#include "Game.h"

InputManager::InputManager(Game* game) : game(game)
{
	
}


InputManager::~InputManager()
{
}

void InputManager::Start()
{
	HDC const dc = GetDC(0);
	Ellipse(dc, 10, 10, 200, 200);
}

void InputManager::UpdatePollEvent(UINT key)
{
	if (GetAsyncKeyState(key)) {
		std::cout << key << std::endl;
	}
}

void InputManager::UpdateBaicEvents()
{
}

bool InputManager::KeyPressed()
{
	return false;
}

bool InputManager::KeyDown(UINT key)
{
	if (GetAsyncKeyState(key)) {
		return true;
	}

	return false;
}

bool InputManager::KeyReleased(UINT key)
{
	if (currentKey != key) {
		currentKey = key;
	}

	return false;
}

bool InputManager::OnMouseRelease()
{
	return false;
}

bool InputManager::OnMouse()
{
	return false;
}
