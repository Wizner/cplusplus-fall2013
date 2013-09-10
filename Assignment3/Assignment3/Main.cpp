#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
#include <string>
using namespace std;

void printOutput(string, float);
string formatMoney(float);
int COLUMN_ONE_WIDTH = 10;
int COLUMN_TWO_WIDTH = 10;

int main()
{
	float price1 = 6.34f;
	float price2 = 8.92f;
	float price3 = 65.40f;
	float price4 = 103.45f;
	char temp_price[16];
			
	cout << fixed << setprecision(2);
	
	cout << left << setw(COLUMN_ONE_WIDTH) << "PART NO." << right << setw(COLUMN_TWO_WIDTH) << "PRICE" << endl;
		
	printOutput("T1267", price1);
	printOutput("T1300", price2);
	printOutput("T2401", price3);
	printOutput("T4482", price4);

	_getch();
	return 0;
}

void printOutput(string partNum, float price)
{	
	cout << left << setw(COLUMN_ONE_WIDTH) << partNum << right << setw(COLUMN_TWO_WIDTH) << formatMoney(price) << endl;
}

string formatMoney(float price)
{	
	//create a temporary character array
	char temp_price[16];
	//use sprintf to format the string two decimal places
	sprintf_s(temp_price, "$%.2f", price);	
	return temp_price;
}