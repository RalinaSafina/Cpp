#include "MyForm1.h"
#include "������3\������3\MyForm5.h"
#include <Windows.h>
using namespace ������4;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm1);
	return 0;
}

