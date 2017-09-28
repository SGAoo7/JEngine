#include "SceneManager.h"



SceneManager::SceneManager()
{
	currentScene = static_cast<Scene*>(&mainScene);
	currentScene->Start();
}


SceneManager::~SceneManager()
{
}

void SceneManager::StartCurrentScene()
{
	currentScene->Start();
}

void SceneManager::UpdateCurrentScene()
{
	currentScene->Update();
}
