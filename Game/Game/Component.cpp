#include "Component.h"
#include "Scene.h"


Component::Component()
{
}


Component::~Component()
{
}

void Component::Start()
{
}

void Component::Draw()
{
}

void Component::Update(float deltaTime)
{
}

void Component::SetScene(Scene* scene) {
	this->scene = scene;
}
