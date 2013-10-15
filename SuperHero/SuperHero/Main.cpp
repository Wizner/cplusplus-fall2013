#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
#include <string>
#include "Helper.h"
#include "Superhero.h"

using namespace std;

void setConsole();

int main()
{
	setConsole();

	Superhero heroes[3];
	int superhero_length = 3;

	heroes[0] = Superhero("Bruce", "Banner", "Hulk Smash", "Hulk");
	heroes[1] = Superhero("Eric", "Masterson", "Mjolnir", "Thor");
	heroes[2] = Superhero("Henry", "Pymn", "Grow/Shrink", "Ant Man");

	for (int i = 0; i < superhero_length; i++)
	{
		cout << heroes[i].first_name() << " " << heroes[i].last_name()
			 << ": " << heroes[i].name() << endl;
	}

	cout << "Please enter a frist name to search: ";
	string first_name = "";
	getline(cin, first_name);

	bool found = false;
	int count = 0;

	while (!found && count < superhero_length)
	{		
		//look for first_name = superhero.first_name()
		if (first_name == heroes[count].first_name())
		{
			cout << "Found \"" << first_name << "\" on: "<< heroes[count].name()
			 << " = " << heroes[count].first_name() << " " << heroes[count].last_name() << endl;
			found = true;
		}
		count ++;
	}
	if (!found)
	{
		cout << "Sorry, there is no superhero by that first name" <<  endl;
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