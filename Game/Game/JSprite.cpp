#include "JSprite.h"
#include "JCollider.h"
#include "Scene.h"

JSprite::JSprite(Scene* _scene, std::string _pathToSPrite, bool _isStatic, bool _isTrigger) : scene(_scene), isTrigger(_isTrigger)
{
	texture.loadFromFile(_pathToSPrite);

	sprite.setTexture(texture);

	collider = new JCollider(this, _scene, isTrigger);

	_scene->AddSpriteToRenderLayer(this);
}

JSprite::~JSprite()
{
}

//only use when moving collidable objects;
void JSprite::Move(float x, float y)
{
	collider->CheckPositionRelativeToObject();

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
}

sf::Sprite& JSprite::GetSprite()
{
	return sprite;
}

sf::Texture& JSprite::GetTexture()
{
	return texture;
}

JCollider& JSprite::GetCollider()
{
	return *collider;
}

void JSprite::SetFillScale(int x, int y)
{
	sprite.setTextureRect(sf::IntRect(0, 0, x, y));
}

void JSprite::SetScene(Scene * _scene)
{
	scene = _scene;
	collider = new JCollider(this, scene, isTrigger);
}
