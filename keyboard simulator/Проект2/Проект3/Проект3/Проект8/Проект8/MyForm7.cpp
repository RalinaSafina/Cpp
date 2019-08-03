#include "MyForm7.h"
#include <Windows.h>
using namespace Проект8;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm7);
	return 0;
}