#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>

using namespace std;

void printOutput(string, float)
string formatMoney(float);

int main()
{
	float price1 = 6.34f;
	float price2 = 8.92f;
	float price3 = 65.40f;
	float price4 = 103.45f;
	char temp_price[16];
	
	int column_one_width = 10;
	int column_two_width = 10;
		
	cout << fixed << setprecision(2);
	
	cout << left << setw(column_one_width) << "PART NO." << right << setw(column_two_width) << "PRICE" << endl;
			
	/*cout << left << setw(column_one_width) << "T1267" << right << setw(column_two_width) << temp_price << endl;
		
	cout << left << setw(column_one_width) << "T1300" << right << setw(column_two_width) << temp_price << endl;
		
	cout << left << setw(column_one_width) << "T2401" << right << setw(column_two_width) << temp_price << endl;
		
	cout << left << setw(column_one_width) << "T4482" << right << setw(column_two_width) << temp_price << endl;
	*/
	printOutput("T1267", price1);
	printOutput("T1300", price2);
	printOutput("T2401", price3);
	printOutput("T4482", price4);

	_getch();
	return 0;
}

void printOutput(string partNum, float price)
{	
	cout << left << setw(COLUMN_ONE_WIDTH) << partNum 
		<< right << setw(COLUMN_THREE_WIDTH) << formatMoney(price) << endl;
}

string formatMoney(float price)
{	
	//create a temporary character array
	char temp_price[16];
	//use sprintf to format the string two decimal places
	sprintf_s(temp_price, "$%.2f", price * 100);	
	return temp_price;
}