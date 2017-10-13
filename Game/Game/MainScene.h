#pragma once

#include <iostream>
#include <string>
#include <list>

#include "Scene.h"
#include "GameObject.h"
#include "Component.h"

class MainScene : public Scene
{
public:
	MainScene();
	~MainScene();

	void Start();
	void Update(float deltaTime);

private:
	GameObject testGameObject = GameObject("TestObject", this);

	JAudioSource* audio = new JAudioSource("sound.wav");
	JSprite sprite = JSprite(this, "../Assets/Art/spriteSheet.png", false, false);
	JAnimation* animtion = new JAnimation("../Assets/Art/spriteSheet.png", sf::Vector2u(7, 4), 27, 0.1f, sprite.GetSprite());
};

