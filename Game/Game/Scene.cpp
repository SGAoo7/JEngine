#include "Scene.h"

Scene::Scene() {
	gameObjectLayerIndex = 0;
}

Scene::~Scene() {

}

void Scene::Start() {

}

void Scene::Update(float deltaTime) {
	for (auto objects = GameObjects.begin(); objects != GameObjects.end(); objects++) {
		for (auto component = objects->second->Components.begin(); component != objects->second->Components.end(); component++) {
			component->second->Update(deltaTime);
		}
	}
}

void Scene::AddToGameObjectList(GameObject* gameObject) {
	GameObjects.insert(std::pair<int, GameObject*>(gameObjectLayerIndex, gameObject));
	gameObjectLayerIndex++;
}

GameObject* Scene::FindGameObjectByName(std::string gameObjectName) {
	for (auto it = GameObjects.begin(); it != GameObjects.end(); it++) {
		if (it->second->Name == gameObjectName) {
			return it->second;
		}
	}

	return nullptr;
}
