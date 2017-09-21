#pragma once

#include <iostream>

#include "Scene.h"

class ExampleScene : public Scene
{
public:
	ExampleScene();
	~ExampleScene();

	void Start();
	void Update();
};

