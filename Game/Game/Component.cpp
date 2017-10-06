#include "Component.h"
#include "Scene.h"


Component::Component()
{
}


Component::~Component()
{
}

void Component::SetScene(Scene* scene) {
	this->scene = scene;
}
