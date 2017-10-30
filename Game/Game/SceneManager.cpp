#include "SceneManager.h"
#include "Game.h"

SceneManager::SceneManager(Game* game) : game(game)
{
	window = &game->GetWindowClass();

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

void SceneManager::UpdateCurrentScene(float deltaTime)
{
	currentScene->Update(deltaTime);
	RenderCurrentScene();
}

void SceneManager::RenderCurrentScene()
{
	window->BeginDraw();

	for (auto it = currentScene->GameObjects.begin(); it != currentScene->GameObjects.end(); it++) {
		for (auto it2 = it->second->Components.begin(); it2 != it->second->Components.end(); it2++) {

			//dynamic sprite casting
			//dynamic sprite rendering
			JE::Sprite* sprite = dynamic_cast<JE::Sprite*>(it2->second);

			if (sprite) {
				window->Draw(sprite->GetSprite());
			}

			JE::Text* text = dynamic_cast<JE::Text*>(it2->second);

			if (text) {
				window->Draw(text->GetText());
			}
		}
	}

	window->EndDraw();
}
