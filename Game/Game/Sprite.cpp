#include "Sprite.h"
#include "Scene.h"

using namespace JE;

Sprite::Sprite(std::string _pathToSPrite, bool _isStatic, bool _isTrigger, GameObject& gameObject) : isTrigger(_isTrigger), Component(gameObject)
{
	texture.loadFromFile(_pathToSPrite);

	sprite.setTexture(texture);
	hasCollider = false;

	//collider = new Collider(this, _scene, isTrigger);
}

Sprite::~Sprite() {

}

//only use when moving collidable objects;
void Sprite::Move(float x, float y)
{
	sprite.move(x, y);
	//collider->CheckPositionRelativeToObject();
	/*
	if (!collider->canMoveRight || !collider->canMoveLeft) {
		sprite.move(0, y);
	}
	else if (!collider->canMoveDown || !collider->canMoveUp) {
		sprite.move(x, 0);
	}
	else {
		sprite.move(x, y);
	}
	
	collider->canMoveUp = true;
	collider->canMoveDown = true;
	collider->canMoveLeft = true;
	collider->canMoveRight = true;
	*/
}

sf::Sprite& Sprite::GetSprite()
{
	return sprite;
}

sf::Texture& Sprite::GetTexture()
{
	return texture;
}

//Collider& JE::Sprite::GetCollider()
//{
//	return *collider;
//}

bool Sprite::IsTrigger()
{
	return isTrigger;
}

bool JE::Sprite::HasCollider()
{
	return hasCollider;
}

void Sprite::SetHasCollider(bool state)
{
	hasCollider = state;
}

void Sprite::SetFillScale(int x, int y)
{
	sprite.setTextureRect(sf::IntRect(0, 0, x, y));
}

void JE::Sprite::SetPosition(float x, float y)
{
	sprite.setPosition(x, y);
}

void Sprite::Update(float deltaTime)
{
	Component::Update(deltaTime);
}