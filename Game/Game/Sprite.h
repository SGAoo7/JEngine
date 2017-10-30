#pragma once

#include <SFML\Graphics.hpp>
#include <iostream>

#include "GameObject.h"

namespace JE {
	class Sprite : public Component {
	public:
		Sprite(std::string _pathToSPrite, bool _isStatic, bool _isTrigger, GameObject& gameObject);
		~Sprite();

		void Update(float deltaTime);

		void Move(float x, float y);

		void SetFillScale(int x, int y);
		void SetPosition(float x, float y);

		///getters;
		sf::Sprite& GetSprite();
		sf::Texture& GetTexture();
		//Collider& GetCollider();
		bool IsTrigger();
		bool HasCollider();

		///setters;
		void SetHasCollider(bool state);

	private:
		sf::Sprite sprite;
		sf::Texture texture;

		bool hasCollider;

		//Collider* collider;
		bool isTrigger;
	};
}