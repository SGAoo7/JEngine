#pragma once

#include <SFML\Graphics.hpp>
#include <iostream>
#include <map>

class Scene;
class JCollider;

class JSprite
{
public:
	JSprite(Scene* _scene, std::string _pathToSPrite, bool _isStatic, bool _isTrigger);
	~JSprite();

	void Move(float x, float y);

	///getters;
	sf::Sprite& GetSprite();
	sf::Texture& GetTexture();
	JCollider& GetCollider();

	///setters;
	void SetFillScale(int x, int y);
	void SetScene(Scene* _scene);
private:
	sf::Sprite sprite;
	sf::Texture texture;

	JCollider* collider;

	Scene* scene;
	bool isTrigger;
};
