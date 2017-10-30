#pragma once

#ifndef COMPONENT_H
#define COMPONENT_H

class GameObject;

class Component
{
public:
	///constructor
	Component(GameObject& gameObject);
	///destructor
	virtual ~Component();

	//Start method of this component
	virtual void Start();
	//Update method of this component
	virtual void Update(float deltaTime);

	GameObject& GetGameObject();

private:
	GameObject& gameObject;
};

#endif