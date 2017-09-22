#pragma once

#include <iostream>
#include <windows.h>

class Window
{
public:
	Window();
	~Window();

	void Start(int width, int height);
	void Update();

	wchar_t* convertCharArrayToLPCWSTR(const char* charArray);
};

