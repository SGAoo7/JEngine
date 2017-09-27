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
	//audio->Play();

	sprite->GetSprite().setScale(0.2f, 0.2f);

	sprite2->GetSprite().setPosition(200, 0);
	sprite2->GetSprite().setScale(0.2f, 0.2f);
}

void MainScene::Update()
{
	Scene::Update();
}
