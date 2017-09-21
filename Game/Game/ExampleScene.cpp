#include "ExampleScene.h"



ExampleScene::ExampleScene()
{
}


ExampleScene::~ExampleScene()
{
}

void ExampleScene::Start()
{
	Scene::Start();

	std::cout << "as;dogiyadsg" << std::endl;
}

void ExampleScene::Update()
{
	Scene::Update(2);
}
