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
	void Update();

private:
	GameObject testGameObject = GameObject("TestObject", this);

	JAudioSource* audio = new JAudioSource("sound.wav");
	JSprite sprite = JSprite(this, "../Assets/Art/sprite.png", false, false);
};

