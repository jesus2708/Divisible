#include "stdafx.h"  //________________________________________ Divisible.cpp
#include "Divisible.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Divisible app;
	return app.BeginDialog(IDI_Divisible, hInstance);
}

void Divisible::Window_Open(Win::Event& e)
{
}

void Divisible::btCalcular_Click(Win::Event& e)
{
	const int input = this->tbxNumero1.IntValue;
	if(input%2==0)
	{
		const int input = this->tbxNumero1.IntValue;
		const int inpu = this->tbxNumero2.IntValue;
		wstring texto;
		texto = Sys::Convert::ToString(input) + L" is exactly divisible by " + Sys::Convert::ToString(inpu);
		tbxResultado.Text = texto;
	}
	else
	{
		const int input = this->tbxNumero1.IntValue;
		const int inpu = this->tbxNumero2.IntValue;
		wstring texto;
		texto = Sys::Convert::ToString(input) + L" is not exactly divisible by " + Sys::Convert::ToString(inpu);
		tbxResultado.Text = texto;
	}
			
}

