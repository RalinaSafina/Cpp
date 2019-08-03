#include "MyForm2.h"
#include<fstream>
#include <Windows.h>
using namespace Проект6;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm2);
	return 0;
}
