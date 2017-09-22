#include "Window.h"

LRESULT CALLBACK WinProc(HWND handle, UINT msg, WPARAM wparam, LPARAM lparam) {

	return DefWindowProc(handle, msg, wparam, lparam);
}

Window::Window()
{
}


Window::~Window()
{
}

void Window::Start(int width, int height)
{
	WNDCLASS wc = { 0 };
	wc.style = CS_OWNDC;
	wc.lpfnWndProc = WinProc;
	wc.hCursor = LoadCursor(nullptr, IDC_ARROW);
	wc.lpszClassName = convertCharArrayToLPCWSTR("Game");
	RegisterClass(&wc);
	
	//create window
	CreateWindow(convertCharArrayToLPCWSTR("Game"), convertCharArrayToLPCWSTR("JEngine"), WS_POPUP | WS_CAPTION | WS_SYSMENU | WS_VISIBLE, 100, 100, width, height, nullptr, nullptr, nullptr, nullptr);
}

void Window::Update()
{
}

wchar_t * Window::convertCharArrayToLPCWSTR(const char * charArray)
{
	wchar_t* wString = new wchar_t[4096];
	MultiByteToWideChar(CP_ACP, 0, charArray, -1, wString, 4096);
	return wString;
}
