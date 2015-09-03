#include "DxLib.h"
#include "Define.h"
#include "GameFrame.h"


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	SetGraphMode(SCREEN_X, SCREEN_Y, COLOR_BIT);
	if (DxLib_Init() == -1)	return -1;
	SetDrawScreen(DX_SCREEN_BACK);

	GameFrame gFrame;
	gFrame.MainLoop();

	DxLib_End();
	return 0;
}