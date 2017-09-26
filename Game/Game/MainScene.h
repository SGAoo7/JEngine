#pragma once

#include <iostream>
#include <string>

#include "Scene.h"

class MainScene : public Scene
{
public:
	MainScene();
	~MainScene();

	void Start();
	void Update();

private:
	JAudioSource* audio = new JAudioSource("sound.wav");
	JSprite* sprite = new JSprite(this, "../Assets/Art/sprite.png", false, false);
};

