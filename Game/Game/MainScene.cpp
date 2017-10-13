#include "MainScene.h"



MainScene::MainScene()
{
}


MainScene::~MainScene()
{
}

void MainScene::Start()
{
	Scene::Start();
	testGameObject.AddComponent(audio);
	testGameObject.AddComponent(&sprite);
	testGameObject.AddComponent(animtion);

	//audio->Play();
}

void MainScene::Update(float deltaTime)
{
	Scene::Update(deltaTime);
}
