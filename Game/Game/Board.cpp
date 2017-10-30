#include "Board.h"

Board::Board(float screenWidth, float screenHeight, GameObject& gameObject) : Component(gameObject) {
	CreateBoard(screenWidth, screenHeight);
}


Board::~Board() {

}

void Board::Start()
{
}

void Board::Update(float deltaTime)
{
	
}

void Board::CreateBoard(float screenWidth, float screenHeight) {
	// define a triangle
	sf::CircleShape triangle(80, 3);

	// define a square
	sf::CircleShape square(80, 4);

	// define an octagon
	sf::CircleShape octagon(80, 8);
}
