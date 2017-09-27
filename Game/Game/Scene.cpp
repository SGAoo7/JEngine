#include "Scene.h"



Scene::Scene()
{
	spriteRenderIndex = 0;
}


Scene::~Scene()
{
}

void Scene::Start()
{
}

void Scene::Update()
{
}

void Scene::AddSpriteToRenderMap(JSprite* sprite)
{
	sprites.insert(std::pair<int, JSprite*>(spriteRenderIndex, sprite));
	spriteRenderIndex++;
}
