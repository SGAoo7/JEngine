#include "SceneManager.h"
#include "CustomRenderWindow.h"
#include "Game.h"



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

	for (auto it = currentScene->sprites.begin(); it != currentScene->sprites.end(); it++) {
		window->Draw(it->second->GetSprite());
	}

	window->EndDraw();
}
