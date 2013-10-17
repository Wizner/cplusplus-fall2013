#include <iostream>
#include <conio.h>
#include <iomanip>
#include "Helper.h"
#include <Windows.h>
#include <string>
using namespace std;

//need to declare (but not define) before use
void setConsole();

int main()
{
	setConsole();

	bool quit = false;

	cout << endl << "While Loop: " << endl;
	int i = 0;
	while (i < 10)
	{
		cout << i << endl;
		i++;
	}

	cout << endl << "For Loop: " << endl;
	for (int j = 0; j < 10; j++)
	{
		cout << j << endl;
	}
	

	_getch();
	return 0;
}

void setConsole()
{
	 //color value for console
	int color = 25;  
	//console reference	
	HANDLE	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//this will loop until either 0 is entered, or a non-numeric value

   	PCONSOLE_FONT_INFOEX font = new CONSOLE_FONT_INFOEX();
   	font->cbSize = sizeof(CONSOLE_FONT_INFOEX);
   
    	//CONSOLE_FONT_INFOEX is defined in some windows header
    	GetCurrentConsoleFontEx(hConsole, false, font);
	//PCONSOLE_FONT_INFOEX is the same as CONSOLE_FONT_INFOEX*
    	font->dwFontSize.X = 10;
    	font->dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(hConsole, false, font);
	SetConsoleTextAttribute(hConsole, 240); 
}

void doDemo()
{
	do 
	{
		cout << "Press q to quit ";
	}
	while (_getch() != 'q' || _getch() != 'Q');
}