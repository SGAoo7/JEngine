#include "Font.h"

using namespace JE;

Font::Font(std::string _pathToFont, GameObject& gameObject) : Component(gameObject) {
	font.loadFromFile(_pathToFont);
}

Font::~Font()
{
}

sf::Font& Font::GetFont()
{
	return font;
}
