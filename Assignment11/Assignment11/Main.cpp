#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>
using namespace std;

void setConsole();

int main()
{
	setConsole();

	//create two arrays, one of spaces and the other of stars
	string space[10] = {" ", "  ", "   ", "    ", "     ", "      ", "       ", "        ", "         ", "          "};
	string stars[10] = {"*", "**", "***", "****", "*****", "******", "*******", "********", "*********", "**********"};

	//declare variables
	int j = 0;
	int k = 9;
	
	//run loop for output
	for (int i = 0; i < 10; i++)
	{		
		cout << stars[j] << space[k] << stars[k] << space[j] << space[j] << stars[k] << space[k] << stars[j] << endl;

		j++;
		k--;
	}
	
	_getch();
	return 0;
}

void setConsole()
{
	int color = 25;  
	HANDLE	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	PCONSOLE_FONT_INFOEX font = new CONSOLE_FONT_INFOEX();
   	font->cbSize = sizeof(CONSOLE_FONT_INFOEX);   
    GetCurrentConsoleFontEx(hConsole, false, font);
    font->dwFontSize.X = 10;
    font->dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(hConsole, false, font);
	SetConsoleTextAttribute(hConsole, 240); 
}