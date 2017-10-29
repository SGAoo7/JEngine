#include "Text.h"

using namespace JE;

Text::Text(Font* font, GameObject& gameObject) : Component(gameObject) {
	text.setFont(font->GetFont());
	text.setPosition(0, 0);
	text.setString("Example Text");
}

Text::~Text() {

}

sf::Text& Text::GetText() {
	return text;
}

void Text::SetText(std::string content) {
	text.setString(content);
}
