#pragma once

class Scene
{
public:
	Scene();
	~Scene();

	virtual void Start();
	virtual void Update(float deltaTime);
};

