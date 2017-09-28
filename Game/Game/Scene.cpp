#include "Scene.h"

Scene::Scene()
{
	spriteRenderLayerIndex = 0;
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

void Scene::AddSpriteToRenderLayer(JSprite* jSprite) {
	sprites.insert(std::pair<int, JSprite*>(spriteRenderLayerIndex, jSprite));
	spriteRenderLayerIndex++;
}
