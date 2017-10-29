#include "Animation.h"

using namespace JE;

Animation::Animation(std::string pathToSpritesheet, sf::Vector2u imageCount, int totalImages, float switchTime, sf::Sprite& spriteToAnimate, GameObject& gameObject)
: imageCount(imageCount), totalImages(totalImages), switchTime(switchTime), spriteToAnimate(spriteToAnimate), Component(gameObject) {
	texture.loadFromFile(pathToSpritesheet);

	intRect.width = texture.getSize().x / imageCount.x;
	intRect.height = texture.getSize().y / imageCount.y;

	totalTime = 0;
	localImagesCount = 0;
	currentImageCoordinates.x = 0;
	currentImageCoordinates.y = 0;
}

Animation::~Animation() {

}

void Animation::Update(float deltaTime) {
	Component::Update(deltaTime);

	totalTime += deltaTime;

	if (totalTime >= switchTime) {
		
		totalTime = 0;

		currentImageCoordinates.x++;
		localImagesCount++;

		if (localImagesCount >= totalImages) {
			currentImageCoordinates.y = 0;
			currentImageCoordinates.x = 0;
			localImagesCount = 0;
		}
		else if (currentImageCoordinates.x >= imageCount.x) {
			currentImageCoordinates.y++;
			currentImageCoordinates.x = 0;
		}

		intRect.left = currentImageCoordinates.x * intRect.width;
		intRect.top = currentImageCoordinates.y * intRect.height;
		
		spriteToAnimate.setTextureRect(intRect);
	}
}