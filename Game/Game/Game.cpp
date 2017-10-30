#include "Game.h"
#include "SceneManager.h"

Game::Game()
{
}


Game::~Game()
{
}

void Game::Update() {

	deltaTime = clock.restart().asSeconds();

	sceneManager.UpdateCurrentScene(deltaTime);
	input.UpdatePollEvent();
}

CustomRenderWindow& Game::GetWindowClass()
{
	return window;
}

SceneManager* Game::GetSceneManager() {
	return &sceneManager;
}

InputManager& Game::GetInputManager()
{
	return input;
}
