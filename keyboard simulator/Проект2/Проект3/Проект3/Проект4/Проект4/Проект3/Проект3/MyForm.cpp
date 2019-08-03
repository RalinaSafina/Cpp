#include "MyForm5.h"
#include<string>
#include<vector>
#include<queue>
#include<fstream>
#include<ctime>
#include <Windows.h>
#include <msclr\marshal_cppstd.h>
using namespace Проект3;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm5);
	return 0;
}


