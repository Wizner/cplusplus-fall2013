#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
#include <string>
#include "Helper.h"
	
using namespace std;

void setConsole();


int main()
{
	//variables
	setConsole();
	Helper h = Helper();
	string hours_worked;
	double user_hours;
	bool keep_looping = true;
	double hourly_wage = 8;
	double salary = 0;

	//creating a loop, so the application can be used multiple times without restarting it
	while (keep_looping)
	{
		cout << "Please enter the number of hours worked this week, ('q' to quit): ";
		cin >> hours_worked;

		//see if user wants to quit the application
		if (hours_worked == "q" || hours_worked == "Q")
		{
			//quit application
			keep_looping = false;
		}
		else
		{
			//check to see if hours_worked is numeric or not
			if (h.IsNumeric(hours_worked))
			{
				user_hours = h.ConvertToDouble(hours_worked);

				//test to find out how many hours of straight pay and how many of overtime pay
				if (user_hours <= 40  && user_hours != 0)
				{
					//calculate straight pay
					salary = user_hours * hourly_wage;
					cout << setprecision(2) << fixed << "Your salary for the week is: $" << salary << endl << endl;
				}
				else if (user_hours > 40)
				{
					//calculate overtime pay
					salary = (hourly_wage * 40) + ((1.5 * hourly_wage)*(user_hours - 40));
					cout << setprecision(2) << fixed << "Your salary for the week is: $" << salary << endl << endl;
				}
				else
				{
					//if hours_worked is equal to zero
					cout << "Please enater a valid number!\n\n";
				}				
			}
			else
			{
				//if hours_worked is not numeric
				cout << "Please enater a valid number!\n\n";
			}
		}
	}


	cout << "\n\nGoodbye!";
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