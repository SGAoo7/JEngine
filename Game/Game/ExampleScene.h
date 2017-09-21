#pragma once

#include <iostream>
#include <windows.h>

#include "Scene.h"

class ExampleScene : public Scene
{
public:
	ExampleScene();
	~ExampleScene();

	void Start();
	void Update();
};

