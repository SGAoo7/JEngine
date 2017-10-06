#include "GameObject.h"



GameObject::GameObject(std::string name, Scene* scene) : Name(name), scene(scene)
{
	componentIndex = 0;
	scene->AddToGameObjectList(this);
}


GameObject::~GameObject()
{
}

void GameObject::AddComponent(Component* component)
{
	Components.insert(std::pair<int, Component*>(componentIndex, component));
	component->SetScene(this->scene);
	componentIndex++;
}
