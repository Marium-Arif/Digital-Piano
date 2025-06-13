#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace Project1;
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(% form);
		
}
