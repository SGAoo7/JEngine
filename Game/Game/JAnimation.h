#pragma once

#include <iostream>
#include <string>

#include <SFML\Graphics.hpp>

#include "Component.h"

class JAnimation : public Component
{
public:
	JAnimation(std::string pathToSpritesheet, sf::Vector2u imageCount, int totalImages, float switchTime, sf::Sprite& spriteToAnimate);
	~JAnimation();

	void Update(float deltaTime);

private:
	float totalTime;
	sf::IntRect intRect;
	sf::Texture texture;

	sf::Vector2u currentImage;
	
	int totalImages;
	int localImagesCount;
	sf::Vector2u imageCount;
	sf::Sprite& spriteToAnimate;
	float switchTime;
};
