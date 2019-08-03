#include "MyForm3.h"
#include<fstream>
#include <Windows.h>
using namespace Проект3;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm3);
	return 0;
}

