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
	window.Init(this);
	window.InitRenderWindow(1920, 1080, "JEngine");
}

void Game::Update()
{
	float time = ((float)deltaTime) / CLOCKS_PER_SEC;
	//std::cout << time << std::endl;

	Render();
	HandleInput();
}

void Game::SetGameOver(bool state)
{
	isGameOver = state;
}

bool Game::GetGameOver()
{
	return isGameOver;
}

void Game::Render()
{
	//window.Update();
}

void Game::HandleInput()
{
	bool key = input.KeyDown(Keys::Up);

	if (key) {
		std::cout << "yo" << std::endl;
	}
}
