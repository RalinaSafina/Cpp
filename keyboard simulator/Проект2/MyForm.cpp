#include "MyForm.h"
#include<fstream>
#include <Windows.h>
#include"Проект3\Проект3\MyForm4.h"
#include"Проект5\Проект5\MyForm3.h"
#include"Проект6\Проект6\MyForm2.h"
#include"Проект3\Проект3\Проект7\Проект7\MyForm6.h"
using namespace Проект2;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
