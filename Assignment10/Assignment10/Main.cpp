#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
#include <string>
#include "helper.h"
using namespace std;

void setConsole();

void goto_xy(int, int);

int main()
{
	Helper h;
	setConsole();
	string number_one = "";
	string number_two = "";
	string menu_option;

	do
	{
		cout << "Please enter the first number you would like to do math to: ";
		cin >> number_one;
		if (!h.IsNumeric(number_one))
		{
			cout << "\n\t\t\tINVALID INPUT\n\n";
		}
	}while (!h.IsNumeric(number_one));
	cout << endl;

	do
	{
		cout << "Please enter the second number you would like to do math to: ";
		cin >> number_two;
		if (!h.IsNumeric(number_two))
		{
			cout << "\n\t\t\tINVALID INPUT\n\n";
		}
	}while (!h.IsNumeric(number_two));
	cout << endl;
		
	bool quit = false;
	do
	{
		cout << "Please pick one of the following options (enter the corresponding number):\n";
		cout << "1.  Add the two numbers.\n";
		cout << "2.  Subtract the second number from the first.\n";
		cout << "3.  Multiply the two numbers.\n";
		cout << "4.  Divide the first number by the second number.\n";
		cout << "5.  Average the two numbers.\n";
		cin >> menu_option;		

		if (h.IsNumeric(menu_option))
		{		
			int math_option = h.ConvertToInt(menu_option);
			if (math_option < 1 || math_option > 5)
			{
				cout << "\n\t\t\tINVALID INPUT\n\n";
			}
			else
			{
				quit = true;
			}
		}
		else
		{
			cout << "\n\t\t\tINVALID INPUT\n\n";
		}
	}while(!quit);




	_getch();
	return 0;

	/*for (int i = 1; i < 11; i++)
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
	}*/
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