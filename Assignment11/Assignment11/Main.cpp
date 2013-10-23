#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>
using namespace std;

void setConsole();
string makeStars(int);
string makeSpaces(int);

int main()
{
	setConsole();

	//declare variables
	int k = 9;
	
	//run loop for output
	for (int i = 0; i < 10; i++)
	{		
		cout << makeStars(i) << makeSpaces(k) << makeStars(k) << makeSpaces(i) << makeSpaces(i)
			 << makeStars(k) << makeSpaces(k) << makeStars(i) << endl;
		k--;
	}

	_getch();
	return 0;
}

string makeStars(int i)
{
	string stars = "";
	for (int j = 0; j <= i; j++)
	{
		stars += "*";		
	}
	return stars;
}

string makeSpaces(int i)
{
	string spaces = "";
	for (int j = 0; j <= i; j++)
	{
		spaces += " ";
	}
	return spaces;
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