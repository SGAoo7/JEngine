#pragma once

#include "Game.h"

int main()
{
	Game game;

	while (!game.GetWindowClass().isDone) {
		game.Update();
	}

	return 0;
}