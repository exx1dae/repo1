#include "MyForm.h"
#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FIRSTPROJECT::MyForm form;
	Application::Run(% form);
}