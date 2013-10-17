#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
using namespace std;

void setConsole();

void goto_xy(int, int);

int main()
{
	setConsole();

	for (int i = 1; i < 11; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 9; i >= 0; i--)
	{		
		for (int j = i; j >= 0; j--)
		{
			goto_xy(12 + i, j);
			cout << "*";
		}
		cout << endl;
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

void goto_xy(int x, int y)
{
	COORD p = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}