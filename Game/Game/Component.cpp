#include "Component.h"
#include "Scene.h"
#include "GameObject.h"

Component::Component(GameObject& gameObject) : gameObject(gameObject) {
	gameObject.AddComponent(this);
}


Component::~Component()
{
}

//Start method of this component
void Component::Start()
{
}

//Update method of this component
void Component::Update(float deltaTime)
{
}

//Set scene method
void Component::SetScene(Scene* scene) {
	this->scene = scene;
}

Scene& Component::GetScene()
{
	return *scene;
}

GameObject& Component::GetGameObject()
{
	return gameObject;
}
