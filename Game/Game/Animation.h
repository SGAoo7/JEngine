#pragma once

#include <iostream>
#include <string>

#include <SFML\Graphics.hpp>

#include "Component.h"

namespace JE {
	//Animation component class
	//Handles animation for a custom inserted sprite
	class Animation : public Component {
	public:
		///constructor
		Animation(std::string pathToSpritesheet, sf::Vector2u imageCount, int totalImages, float switchTime, sf::Sprite& spriteToAnimate, GameObject& gameObject);
		///destructor
		~Animation();
		///update method which is called from the upper component class
		void Update(float deltaTime);
		float switchTime;

	private:
		///local total time of a single frame played
		float totalTime;
		///local frame rect
		sf::IntRect intRect;
		///local texture loaded from spritesheet
		sf::Texture texture;
		///coordinates of current set image in spritesheet
		sf::Vector2u currentImageCoordinates;

		int totalImages;
		int localImagesCount;
		sf::Vector2u imageCount;
		sf::Sprite& spriteToAnimate;

	};
}

