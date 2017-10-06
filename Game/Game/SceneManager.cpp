#include "SceneManager.h"
#include "Game.h"
#include "CustomRenderWindow.h"



SceneManager::SceneManager(Game* game) : game(game)
{
	window = game->GetWindowClass();

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
	RenderCurrentScene();
}

void SceneManager::RenderCurrentScene()
{
	window->BeginDraw();

	for (auto it = currentScene->GameObjects.begin(); it != currentScene->GameObjects.end(); it++) {
		for (auto it2 = it->second->Components.begin(); it2 != it->second->Components.end(); it2++) {
			it2->second.
		}
	}

	window->EndDraw();
}
