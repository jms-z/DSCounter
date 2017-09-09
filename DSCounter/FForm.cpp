//DSCounter
//1/19/2017

#include "FForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DSCounter::FForm form;

	Application::Run(%form);
}
