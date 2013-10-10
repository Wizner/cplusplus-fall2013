#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
#include <string>
#include "Helper.h"
#include "Temperature.h"
using namespace std;

void setConsole();

int main()
{
	setConsole();	
	Temperature t;
	Helper h;
	bool loop1 = true;
	bool loop2 = true;
	string user_temperature;
	string user_temp_scale;
	double temperature;
	double celcius_temp;
	double fahrenheit_temp;

	//creating a loop so the application can be used multiple times without restarting it
	while (loop1)
	{
		//get temperature(number) from user
		cout << "Please enter the temperature(number)\nyou want to convert, ('q' to quit): ";
		cin >> user_temperature;

		//see if user wants to quit the application
		if (user_temperature == "q" || user_temperature == "Q")
		{
			loop1 = false;
		}
		else
		{
			//check to see if input is numeric or not
			if (h.IsNumeric(user_temperature))
			{
				temperature = h.ConvertToDouble(user_temperature);

				//reset loop 2 to true
				loop2 = true;				

				//creating a loop to make user pick a valid option
				while (loop2)
				{					
					//get temperature scale from the user
					cout << "\nPlease enter the temperature scale your number" << endl
						<< "is currently in ('f' for fahrenheit, 'c' for celcius): ";
					cin >> user_temp_scale;
										
					//determine which temperature scale the user is using
					if (user_temp_scale == "f" || user_temp_scale == "F")
					{
						//end the loop
						loop2 = false;

						//set the celcius and fahrenheit values
						t.set_celcius(temperature);
						t.set_fahrenheit(t.celcius());

						//display output
						cout << endl << endl << setprecision(2) << fixed << t.fahrenheit() << " degrees Fahrenheit is equal to " 
							<< t.celcius() << " degrees Celcius\n\n\n";
					}
					else if (user_temp_scale == "c" || user_temp_scale == "C")
					{
						//end the loop
						loop2 = false;

						//set the fahrenheit and celcius values
						t.set_fahrenheit(temperature);
						t.set_celcius(t.fahrenheit());

						//display output
						cout << endl << endl << setprecision(2) << fixed << t.celcius() << " degrees Celcius is equal to " 
							<< t.fahrenheit() << " degrees Fahrenheit\n\n\n";
					}
					else
					{
						//if the user entered an invalid option
						cout << "\n\t\tINVALID INPUT!\n";
					}					
				}				
			}
			else
			{
				//if input is not numeric
				cout << "\n\t\tINVALID INPUT!\n\n";
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