#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
#include <string>
#include "helper.h"
using namespace std;

void setConsole();
double average(double, double, double);

int main()
{
	Helper h;
	string number1;
	string number2;
	string number3;
	bool loop1 = true;
	bool loop2 = true;
	bool loop3 = true;
	bool loop4 = true;
	double num1;
	double num2;
	double num3;	

	//creating a loop so the application can be used multiple times without restarting it
	while (loop1)
	{
		while (loop1 && loop2)
		{
			//get input for first number
			cout << "Enter a number ('q' to quit): ";
			cin >> number1;

			//see if user wants to quit the application
			if (number1 == "q" || number1 == "Q")
			{
				loop1 = false;			
				loop2 = false;
			}
			else if (h.IsNumeric(number1))  //if entered data is numeric
			{
				loop2 = false;				
			}
			else  //if entered data is not numeric
			{
				cout << "\n\t\t\tINVALID INPUT\n\n";				
			}
		}
		loop2 = true;  //reset loop to true so program can be used again without restarting
		num1 = h.ConvertToDouble(number1); //assign first user entered number
		cout << endl;

		while (loop1 && loop3)
		{
			//get input for second number
			cout << "Enter a second number ('q' to quit): ";
			cin >> number2;

			//see if user wants to quit the application
			if (number2 == "q" || number2 == "Q")
			{
				loop1 = false;			
				loop3 = false;
			}
			else if (h.IsNumeric(number2))  //if entered data is numeric
			{
				loop3 = false;				
			}
			else  //if entered data is not numeric
			{
				cout << "\n\t\t\tINVALID INPUT\n\n";				
			}
		}
		loop3 = true;  //reset loop to true so program can be used again without restarting
		num2 = h.ConvertToDouble(number2); //assign first user entered number
		cout << endl;

		while (loop1 && loop4)
		{
			//get input for third number
			cout << "Enter a third number ('q' to quit): ";
			cin >> number3;

			//see if user wants to quit the application
			if (number3 == "q" || number3 == "Q")
			{
				loop1 = false;			
				loop4 = false;
			}
			else if (h.IsNumeric(number3))  //if entered data is numeric
			{
				loop4 = false;				
			}
			else  //if entered data is not numeric
			{
				cout << "\n\t\t\tINVALID INPUT\n\n";				
			}
		}
		loop4 = true;  //reset loop to true so program can be used again without restarting
		num3 = h.ConvertToDouble(number3); //assign first user entered number
		cout << endl;

		cout << setprecision(1) << fixed << "The average is: " << average(num1, num2, num3) << endl << endl;
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

double average(double num_one, double num_two, double num_three)
{
	double total = (num_one + num_two + num_three) / 3;
	return total;
}