#include "JAnimation.h"

JAnimation::JAnimation(std::string pathToSpritesheet, sf::Vector2u imageCount, int totalImages, float switchTime, sf::Sprite& spriteToAnimate)
: imageCount(imageCount), totalImages(totalImages), switchTime(switchTime), spriteToAnimate(spriteToAnimate)
{
	texture.loadFromFile(pathToSpritesheet);

	intRect.width = texture.getSize().x / (float)imageCount.x;
	intRect.height = texture.getSize().y / (float)imageCount.y;

	totalTime = 0;
	localImagesCount = 0;
	currentImage.x = 0;
	currentImage.y = 0;
}

JAnimation::~JAnimation()
{
}

void JAnimation::Update(float deltaTime)
{
	Component::Update(deltaTime);

	totalTime += deltaTime;

	if (totalTime >= switchTime) {
		
		totalTime = 0;

		currentImage.x++;
		localImagesCount++;
		std::cout << localImagesCount << std::endl;

		if (currentImage.x >= imageCount.x) {
			currentImage.y++;
			currentImage.x = 0;
			if (localImagesCount >= totalImages) {
				currentImage.y = 0;
				currentImage.x = 0;
				localImagesCount = 0;
			}
		}

		intRect.left = currentImage.x * intRect.width;
		intRect.top = currentImage.y * intRect.height;
		
		spriteToAnimate.setTextureRect(intRect);
	}
}
