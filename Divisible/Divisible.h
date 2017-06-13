#pragma once  //______________________________________ Divisible.h  
#include "Resource.h"
class Divisible: public Win::Dialog
{
public:
	Divisible()
	{
	}
	~Divisible()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxNumero1;
	Win::Label lb2;
	Win::Textbox tbxNumero2;
	Win::Textbox tbxResultado;
	Win::Button btCalcular;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(10.82146);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(2.91042);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Divisible";
		lb1.CreateX(NULL, L"numero 1", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.58208, 0.37042, 2.22250, 0.60854, hWnd, 1000);
		tbxNumero1.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 0.50271, 1.29646, 2.30187, 0.60854, hWnd, 1001);
		lb2.CreateX(NULL, L"Numero 2", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 4.49792, 0.44979, 2.43417, 0.60854, hWnd, 1002);
		tbxNumero2.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 4.47146, 1.27000, 2.43417, 0.60854, hWnd, 1003);
		tbxResultado.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 0.47625, 2.11667, 6.61458, 0.60854, hWnd, 1004);
		btCalcular.CreateX(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 7.93750, 0.92604, 2.69875, 0.68792, hWnd, 1005);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		tbxNumero1.Font = fontArial009A;
		lb2.Font = fontArial009A;
		tbxNumero2.Font = fontArial009A;
		tbxResultado.Font = fontArial009A;
		btCalcular.Font = fontArial009A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) {btCalcular_Click(e); return true;}
		return false;
	}
};
