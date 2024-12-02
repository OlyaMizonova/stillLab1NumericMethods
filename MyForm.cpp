//#include <windows.h>
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(cli::array<String^>^ args) {
	//ShowWindow(FindWindowA("ConsoleWindowClass", NULL), false);
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	lab1Nimeric::MyForm form;
	Application::Run(% form);
}