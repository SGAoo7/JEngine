#include "Scene.h"
#include "GameObject.h"

Scene::Scene()
{
	spriteRenderLayerIndex = 0;
	gameObjectLayerIndex = 0;
}


Scene::~Scene()
{
}

void Scene::Start()
{
}

void Scene::Update(float deltaTime)
{
	for (auto objects = GameObjects.begin(); objects != GameObjects.end(); objects++) {
		for (auto component = objects->second->Components.begin(); component != objects->second->Components.end(); component++) {
			component->second->Update(deltaTime);
		}
	}
}

void Scene::AddSpriteToRenderLayer(JSprite* jSprite) {
	sprites.insert(std::pair<int, JSprite*>(spriteRenderLayerIndex, jSprite));
	spriteRenderLayerIndex++;
}

void Scene::AddToGameObjectList(GameObject* gameObject) {
	GameObjects.insert(std::pair<int, GameObject*>(gameObjectLayerIndex, gameObject));
	gameObjectLayerIndex++;
}
