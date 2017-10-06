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
}

void MainScene::Update()
{
	Scene::Update();
}
