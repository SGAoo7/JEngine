#pragma once

#include "Scene.h"

class MainScene : public Scene
{
public:
	MainScene();
	~MainScene();

	void Start();
	void Update();

private:
	JAudioSource audio;
};

