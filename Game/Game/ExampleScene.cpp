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

	CImg<unsigned char> img("lena.png");              // Read in the image lena.png
	const unsigned char valR = img(10, 10, 0, 0);        // Read the red component at coordinates (10,10)
	const unsigned char valG = img(10, 10, 0, 1);        // Read the green component at coordinates (10,10)
	const unsigned char valB = img(10, 10, 2);          // Read the blue component at coordinates (10,10) (Z-coordinate omitted here).
	const unsigned char avg = (valR + valG + valB) / 3; // Compute average pixel value.
	img(10, 10, 0) = img(10, 10, 1) = img(10, 10, 2) = avg; // Replace the pixel (10,10) by the average grey value.
	CImgDisplay main_disp(img, "Modified Lena");      // Display the modified image on the screen
	img.save("lena_mod.png");                         // Save the modified image to lena_mod.png

}

void ExampleScene::Update()
{
	Scene::Update(2);
}
