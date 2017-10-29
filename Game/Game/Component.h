#pragma once

#include <SFML\Graphics.hpp>


class Scene;
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

	///Setters
	void SetScene(Scene* scene);

	///Getters
	Scene& GetScene();
	GameObject& GetGameObject();

private:
	//Pointer to specific scene the component is "active" in
	Scene* scene;

	GameObject& gameObject;
};
