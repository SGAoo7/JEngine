#pragma once

class Scene;

class Component
{
public:
	Component();
	virtual ~Component();

	virtual void Start();
	virtual void Draw();
	virtual void Update(float deltaTime);

	void SetScene(Scene* scene);

private:
	Scene* scene;
};

