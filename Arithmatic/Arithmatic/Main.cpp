#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

//need for shell color on windows machine
#include <Windows.h>
#include "Helper.h"

using namespace std;
 
//need to declare (but not define) before use
void setConsole();
 
int main()
{
	setConsole();
	Helper h = Helper();
	bool keep_looping = true;

	while (keep_looping)
	{
		cout << "Select a menu option, 'q' to quit:" << endl;
		cout << "1. Addition" << endl << "2. Multiplication" << endl;
		string option;
		cin >> option;
		if (option == "q" || option == "Q")
		{
			//quit
			keep_looping = false;
		}
		else
		{
			if (h.IsNumericInt(option))
			{
				int num_one;
				int num_two;
				int num_answer;
				cout << "First Number? ";
				cin >> num_one;
				cout << "Second Number? ";
				cin >> num_two;

				int num_option = h.ConvertToInt(option);

				switch (num_option)
				{
					case 1:
						num_answer = num_one + num_two;
						cout << "The answer is: " << num_answer << endl << endl;
						break;
					case 2:
						num_answer = num_one * num_two;
						cout << "The answer is: " << num_answer << endl << endl;
						break;
					default:
						cout << "Please select an exisiting menu opton" << endl;
				}			
			}
			else
			{
				cout << "Please enater a valid number!" << endl;
			}
		}
	}


	cout << "Goodbye!";
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