#pragma once

#include <SFML\Graphics.hpp>

#include "Component.h"

class Scene;

namespace JE {
	class Font : public Component {
	public:
		Font(std::string _pathToFont, GameObject& gameObject);
		~Font();

		sf::Font& GetFont();
	private:
		sf::Font font;
	};
}
