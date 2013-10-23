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
	//declare variables
	Helper h;
	setConsole();
	bool loop1 = true;
	bool loop2 = true;
	bool loop3 = true;
	bool loop4 = true;
	string number_one = "";
	string number_two = "";
	string menu_option;
	double first_number;
	double second_number;

	//creating a loop so the application can be used multiple times without restarting it
	while (loop1)
	{
		//get input for first number
		while (loop1 && loop2)
		{			
			cout << "Please enter the first number you would like to do math to, ('q' to quit): ";
			cin >> number_one;

			//see if user wants to quit the application
			if (number_one == "q" || number_one == "Q")
			{
				loop1 = false;
				loop2 = false;
			}
			else if (h.IsNumeric(number_one))  //if entered data is numeric
			{
				loop2 = false;
			}
			else  //if entered data is not numeric
			{
				cout << "\n\t\t\tINVALID INPUT\n\n";				
			}
		}		
		loop2 = true;  //reset loop to true so program can be used again without restarting
		first_number = h.ConvertToDouble(number_one); //assign first user entered number
		cout << endl;

		//get input for second number
		while (loop1 && loop3)
		{
			cout << "Please enter the second number you would like to do math to ('q' to quit): ";
			cin >> number_two;

			//see if user wants to quit the application
			if (number_two == "q" || number_two == "Q")
			{
				loop1 = false;
				loop3 = false;
			}
			else if (h.IsNumeric(number_two))  //if entered data is numeric
			{
				loop3 = false;				
			}
			else  //if entered data is not numeric
			{
				cout << "\n\t\t\tINVALID INPUT\n\n";
			}
		}
		loop3 = true;  //reset loop to true so program can be used again without restarting
		second_number = h.ConvertToDouble(number_two);  //assign second user entered number
		cout << endl;		
		
		//get input for type o operation
		while (loop1 && loop4)
		{
			cout << "Please pick one of the following options:\n(enter the corresponding number, 'q' to quit)\n";
			cout << "1.  Add the two numbers.\n";
			cout << "2.  Subtract the second number from the first.\n";
			cout << "3.  Multiply the two numbers.\n";
			cout << "4.  Divide the first number by the second number.\n";
			cout << "5.  Average the two numbers.\n\n";
			cin >> menu_option;		

			//see if user wants to quit the application
			if (menu_option == "q" || menu_option == "Q")
			{
				loop1 = false;
				loop4 = false;
			}
			else if (h.IsNumeric(menu_option))  //if entered data is numeric
			{		
				int math_option = h.ConvertToInt(menu_option);			
				switch (math_option)
				{
					case 1:
						cout << endl << first_number << " + " << second_number << " = " 
							 << addition(first_number, second_number) << endl << endl;
						break;
					case 2:
						cout << endl << first_number << " - " << second_number << " = " 
							 << subtraction(first_number, second_number) << endl << endl;
						break;
					case 3:
						cout << endl << first_number << " * " << second_number << " = " 
							 << multiply(first_number, second_number) << endl << endl;
						break;
					case 4:
						cout << endl << first_number << " / " << second_number << " = " 
							 << divide(first_number, second_number) << endl << endl;
						break;
					case 5:
						cout << "\nThe average of the two numbers is: "
							 << average(first_number, second_number) << endl << endl;
						break;
					default:
						cout << "\n\t\t\tINVALID INPUT\n\n";
				}
				loop4 = false;				
			}
			else  //if entered data is not numeric
			{
				cout << "\n\t\t\tINVALID INPUT\n\n";
			}
		}
		loop4 = true;  //reset loop to true so program can be used again without restarting
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