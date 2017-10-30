#pragma once

#ifndef FONT_H
#define FONT_H

#include <SFML\Graphics.hpp>

#include "GameObject.h"

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

#endif
