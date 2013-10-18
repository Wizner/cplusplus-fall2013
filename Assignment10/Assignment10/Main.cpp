#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
#include <string>
#include "helper.h"
using namespace std;

void setConsole();

void goto_xy(int, int);
double addition(double, double);
double subtraction(double, double);
double multiply(double, double);
double divide(double, double);
double average(double, double);

int main()
{
	Helper h;
	setConsole();
	string number_one = "";
	string number_two = "";
	string menu_option;
	double first_number;
	double second_number;

	do
	{
		cout << "Please enter the first number you would like to do math to: ";
		cin >> number_one;
		if (!h.IsNumeric(number_one))
		{
			cout << "\n\t\t\tINVALID INPUT\n\n";
		}
	}while (!h.IsNumeric(number_one));
	first_number = h.ConvertToDouble(number_one);
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
	second_number = h.ConvertToDouble(number_two);
	cout << endl;
		
	bool quit = false;
	do
	{
		cout << "Please pick one of the following options (enter the corresponding number):\n";
		cout << "1.  Add the two numbers.\n";
		cout << "2.  Subtract the second number from the first.\n";
		cout << "3.  Multiply the two numbers.\n";
		cout << "4.  Divide the first number by the second number.\n";
		cout << "5.  Average the two numbers.\n\n";
		cin >> menu_option;		

		if (h.IsNumeric(menu_option))
		{		
			int math_option = h.ConvertToInt(menu_option);			
			switch (math_option)
			{
				case 1:
					cout << endl << first_number << " + " << second_number << " = " 
						 << addition(first_number, second_number) << endl;
					break;
				case 2:
					cout << endl << first_number << " - " << second_number << " = " 
						 << subtraction(first_number, second_number) << endl;
					break;
				case 3:
					cout << endl << first_number << " * " << second_number << " = " 
						 << multiply(first_number, second_number) << endl;
					break;
				case 4:
					cout << endl << first_number << " / " << second_number << " = " 
						 << divide(first_number, second_number) << endl;
					break;
				case 5:
					cout << "\nThe average of the two numbers is: "
						 << average(first_number, second_number) << endl;
					break;
				default:
					cout << "\n\t\t\tINVALID INPUT\n\n";
			}
			quit = true;			
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

double addition(double num_one, double num_two)
{
	double total = num_one + num_two;
	return total;
}

double subtraction(double num_one, double num_two)
{
	double total = num_one - num_two;
	return total;
}

double multiply(double num_one, double num_two)
{
	double total = num_one * num_two;
	return total;
}

double divide(double num_one, double num_two)
{
	double total = num_one / num_two;
	return total;
}

double average(double num_one, double num_two)
{
	double total = (num_one + num_two) / 2;
	return total;
}