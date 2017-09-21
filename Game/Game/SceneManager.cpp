#include "SceneManager.h"
#include "Game.h"

SceneManager::SceneManager(Game* game) : game(game)
{
	currentScene = static_cast<Scene*>(&exampleScene);
	currentScene->Start();
}


SceneManager::~SceneManager()
{
}

void SceneManager::StartScene()
{
}

void SceneManager::UpdateScene()
{
}
