#include "MainScene.h"



MainScene::MainScene()
{
}


MainScene::~MainScene() {
}

void MainScene::Start()
{
	Scene::Start();

	sprite2.SetPosition(400, 0);
}

void MainScene::Update(float deltaTime)
{
	Scene::Update(deltaTime);

	if (Input->KeyDown(sf::Keyboard::A)) {
		sprite2.Move(-2, 0);
	}
	else if (Input->KeyDown(sf::Keyboard::D)) {
		sprite2.Move(2, 0);
	}

	GameObject* box = boxCollider2.Collide();
	if (box) {
		std::cout << box->Name << std::endl;
	}
}
