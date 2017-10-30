#pragma once

#include <iostream>
#include <string>
#include <list>

#include "Scene.h"
#include "GameObject.h"
#include "Component.h"

#include "Board.h"

class MainScene : public Scene
{
public:
	MainScene();
	~MainScene();

	void Start();
	void Update(float deltaTime);

private:

	GameObject boardManager = GameObject("boardManager", *this);

	Board board = Board(512, 512, boardManager);

	/*
	///declare gameObjects
	GameObject testGameObject = GameObject("TestObject", this);
	GameObject testGameObject2 = GameObject("TestObject2", this);

	///declare components
	AudioSource* audio = new AudioSource("sound.wav", testGameObject);
	
	Sprite sprite = Sprite("../Assets/Art/spriteSheet.png", false, false, testGameObject);
	BoxCollider boxCollider = BoxCollider(sprite, testGameObject);
	
	Sprite sprite2 = Sprite("../Assets/Art/spriteSheet.png", false, false, testGameObject2);
	BoxCollider boxCollider2 = BoxCollider(sprite2, testGameObject2);

	Animation* animtion = new Animation("../Assets/Art/spriteSheet.png", sf::Vector2u(8, 3), 24, 0.1f, sprite.GetSprite(), testGameObject);
	Animation* animtion2 = new Animation("../Assets/Art/spriteSheet.png", sf::Vector2u(8, 3), 24, 0.1f, sprite2.GetSprite(), testGameObject2);

	Font font = Font("../Assets/Fonts/Heroes Legend.ttf", testGameObject);
	Text text = Text(&font, testGameObject);
	*/
};

