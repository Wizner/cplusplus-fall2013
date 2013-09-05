#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
#include <string>
using namespace std;

void heroPrint(string, string, float);
string formatMoney(float);

const int COLUMN_ONE_WIDTH = 20;
const int COLUMN_TWO_WIDTH = 20;
const int COLUMN_THREE_WIDTH = 20;

int main()
{		
	int total_width = COLUMN_ONE_WIDTH + COLUMN_TWO_WIDTH + COLUMN_THREE_WIDTH;
		
	cout << "**Superheroes**" << endl;
	cout << setfill('-');
	cout << setw(total_width) << "" << endl;
	cout << setfill(' ');

	cout << left << setw(COLUMN_ONE_WIDTH) << "NAME"
		<< left << setw(COLUMN_TWO_WIDTH) << "POWER" 
		<< right << setw(COLUMN_THREE_WIDTH) << "MONEY" << endl;
	heroPrint("Iron Man", "Fancy Suit", 1000000000.0f);
	heroPrint("Hulk", "Smash", 0.05f);
	
	_getch();
	return 0;
}

void heroPrint(string name, string power, float money)
{	
	cout << left << setw(COLUMN_ONE_WIDTH) << name 
		<< left << setw(COLUMN_TWO_WIDTH) << power 
		<< right << setw(COLUMN_THREE_WIDTH) << formatMoney(money) << endl;
}

string formatMoney(float money)
{	
	//create a temporary character array
	char temp_price[16];
	//use sprintf to format the string two decimal places
	sprintf_s(temp_price, "$%.2f", money);	
	return temp_price;
}