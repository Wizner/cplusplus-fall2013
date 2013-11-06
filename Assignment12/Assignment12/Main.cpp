#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>
#include "Helper.h"

using namespace std;

void setConsole();
double mult(double, double);

int main()
{
	//declare variables	
	setConsole();	
	Helper h;
	string numberOne;
	string numberTwo;
	double numOne;
	double numTwo;
	bool loop1 = true;
	bool loop2 = false;

	//loop through until the user wants to quit
	while (loop1)
	{
		//get first number fom the user
		cout << "Please enter the first number you would like to multiply ('q' to quit): ";
		cin >> numberOne;

		//see if user wants to quit the application
		if (numberOne == "q" || numberOne == "Q")
		{
			loop1 = false;
			loop2 = false;
		}
		else
		{
			//check to see if input is numeric or not
			if (h.IsNumeric(numberOne))
			{
				numOne = h.ConvertToDouble(numberOne);
				//if number is numeric, then continue to the next number
				loop2 = true;
			}
			else
			{
				//if input is not numeric
				cout << "\n\t\tINVALID INPUT!\n\n";
			}
		}

		while (loop2)
		{
			//get second number fom the user		
			cout << "\nPlease enter the second number you would like to multiply ('q' to quit): ";
			cin >> numberTwo;
		
			//see if user wants to quit the application
			if (numberTwo == "q" || numberTwo == "Q")
			{
				loop1 = false;
				loop2 = false;
			}
			else
			{
				//check to see if input is numeric or not
				if (h.IsNumeric(numberTwo))
				{
					numTwo = h.ConvertToDouble(numberTwo);
					
					//call the function "mult" and display the output
					cout << endl << numOne << " * " << numTwo << " = " << setprecision(3) << fixed << mult(numOne, numTwo) << endl << endl;
					loop2 = false;
				}
				else
				{
					//if input is not numeric
					cout << "\n\t\tINVALID INPUT!\n";
				}
			}
		}
	}

	cout << "\n\t\tGoodbye!";

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

double mult(double one, double two)
{
	double total = one * two;
	return total;
}