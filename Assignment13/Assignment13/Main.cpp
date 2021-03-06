#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>
#include "Helper.h"

using namespace std;

void setConsole();
int calculate_change(int, int &, int &, int &, int &, int &, int &);

int main()
{
	//declare variables	
	setConsole();	
	Helper h;
	string purchase_price;
	int cost;
	int change;
	int fives = 0;
	int ones = 0;
	int quarters = 0;
	int dimes = 0;
	int nickles = 0;
	int pennies = 0;
	bool loop1 = true;

	//loop through until the user wants to quit
	while (loop1)
	{
		cout << "Please enter the purchase price (between $.01 and $10.00, 'q' to quit): ";
		cin >> purchase_price;

		//see if user wants to quit the application
		if (purchase_price == "q" || purchase_price == "Q")
		{
			loop1 = false;
		}
		else
		{
			//check to see if input is numeric or not
			if (h.IsNumeric(purchase_price))
			{		
				//convert data to an integer
				cost = (int)(h.ConvertToDouble(purchase_price) * 10000);	
				if (cost > 100000 || cost < 100)
				{
					cout << "\n\t\tPLEASE ENTER A VALUE BETWEEN $.01 and $10.00!\n\n";
				}
				else
				{
					change = calculate_change(cost, fives, ones, quarters, dimes, nickles, pennies);

					//display output
					if (cost != 10.0)
					{
						cout << setprecision(2) << fixed << "\nThe purchase change is $"<< ((double)change) / 10000 << " or:\n";
					}
					else
					{
						cout << "\n\tYou do not get any change\t\n";
					}

					if (fives != 0)
					{
						cout << "\t" << fives << " - five dollar bill\t\n";
					}
					if (ones != 0)
					{
						if (ones == 1)
						{
							cout << "\t" << ones << " - one dollar bill\t\n";
						}
						else
						{
							cout << "\t" << ones << " - one dollar bills\t\n";
						}
					}
					if (quarters != 0)
					{
						if (quarters == 1)
						{
							cout << "\t" << quarters << " - quarter\t\t\n";
						}
						else
						{
							cout << "\t" << quarters << " - quarters\t\t\n";
						}
					}
					if (dimes != 0)
					{
						if (dimes == 1)
						{
							cout << "\t" << dimes << " - dime\t\t\n";
						}
						else
						{
							cout << "\t" << dimes << " - dimes\t\t\n";
						}
					}
					if (nickles != 0)
					{
						cout << "\t" << nickles << " - nickle\t\t\n";
					}
					if (pennies != 0)
					{
						if (pennies == 1)
						{
							cout << "\t" << pennies << " - penny\t\t\n";
						}
						else
						{
							cout << "\t" << pennies << " - pennies\t\t\n";
						}
					}
					cout << endl;
				}
			}			
			else
			{
				//if input is not numeric
				cout << "\n\t\tINVALID INPUT!\n\n";
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

int calculate_change(int cost, int &fives, int &ones, int &quarters, int &dimes, int &nickles, int &pennies)
{
	const int values_length = 6;
	const int currency_length = 6;
	int currency[currency_length] = {fives, ones, quarters, dimes, nickles, pennies};
	int values[values_length] = {50000, 10000, 2500, 1000, 500, 100};
	int change = 100000 - cost;
	
	for (int i = 0; i < values_length; i++)
	{
		currency[i] = change / values[i];
		change -= (currency[i] * values[i]);
	}
	fives = currency[0];
	ones = currency[1];
	quarters = currency[2];
	dimes = currency[3];
	nickles = currency[4];
	pennies = currency[5];
	change = 100000 - cost;
	return change;
}