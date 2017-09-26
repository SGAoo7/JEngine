#include "Game.h"

Game::Game()
{
}


Game::~Game()
{
}

void Game::Update() {

	deltaTime = clock.restart().asSeconds();

	sceneManager.UpdateCurrentScene();
	input.UpdatePollEvent();
}

CustomRenderWindow * Game::GetWindowClass()
{
	return &window;
}

SceneManager* Game::GetSceneManager() {
	return &sceneManager;
}