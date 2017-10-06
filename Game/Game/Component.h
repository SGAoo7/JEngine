#pragma once

class Scene;

class Component
{
public:
	Component();
	virtual ~Component();

	virtual void Start();
	virtual void Update();

	void SetScene(Scene* scene);

private:
	Scene* scene;
};

