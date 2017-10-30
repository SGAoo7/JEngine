#pragma once

#include "GameObject.h"
#include "JEComponents.h"

class Board : public Component {
public:
	Board(float screenWidth, float screenHeight, GameObject& gameObject);
	~Board();

	//Sprite sprite = Sprite("", true, true, GetGameObject());

	void Start();
	void Update(float deltaTime);

private:
	void CreateBoard(float screenWidth, float screenHeight);
};

