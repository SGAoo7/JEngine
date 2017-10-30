#pragma once

#include <SFML\Graphics.hpp>

#include "GameObject.h"
#include "Font.h"

class Scene;

namespace JE {
	class Text : public Component {
	public:
		Text(Font* font, GameObject& gameObject);
		~Text();

		sf::Text& GetText();

		void SetText(std::string content);

	private:
		sf::Text text;
	};
}

