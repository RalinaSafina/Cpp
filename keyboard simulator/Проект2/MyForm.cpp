#include "MyForm.h"
#include<fstream>
#include <Windows.h>
#include"������3\������3\MyForm4.h"
#include"������5\������5\MyForm3.h"
#include"������6\������6\MyForm2.h"
#include"������3\������3\������7\������7\MyForm6.h"
using namespace ������2;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
