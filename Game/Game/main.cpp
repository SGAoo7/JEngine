#pragma once

#include "Game.h"

int main() {

	Game* game = Game::GetInstance();

	game->Start();

	while (!game->GetGameOver()) {
		game->Update();
	}

	return 0;
}