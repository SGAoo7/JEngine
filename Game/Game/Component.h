#pragma once

class Scene;

class Component
{
public:
	Component();
	~Component();

	void SetScene(Scene* scene);

private:
	Scene* scene;
};

