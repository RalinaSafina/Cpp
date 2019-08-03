#include "MyForm4.h"
#include <Windows.h>
using namespace Проект3;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm4);
	return 0;
}

