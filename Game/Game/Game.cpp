#include "Game.h"

Game::Game()
{
	isGameOver = false;
	deltaTime = clock();
}

Game::~Game()
{
}

Game* Game::GetInstance()
{
	static Game* inst = nullptr;

	if (!inst) {
		inst = new Game();
	}

	return inst;
}

void Game::Start()
{
}

void Game::Update()
{
	float time = ((float)deltaTime) / CLOCKS_PER_SEC;
	//std::cout << time << std::endl;

	Render();
	HandleInput();
}

bool Game::GetGameOver()
{
	return isGameOver;
}

void Game::Render()
{
}

void Game::HandleInput()
{
	bool key = input.KeyDown(VK_UP);
}
