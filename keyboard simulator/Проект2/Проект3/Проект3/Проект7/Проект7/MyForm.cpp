#include "MyForm6.h"
#include<fstream>
#include <Windows.h>
using namespace ������7;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm6);
	return 0;
}
