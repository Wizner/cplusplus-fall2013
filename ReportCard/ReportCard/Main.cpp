#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
using namespace std;

void setConsole();

int main()
{
	float price1 = 6.34f;
	float price2 = 8.92f;
	float price3 = 65.40f;
	float price4 = 103.45f;
	
	int column_one_width = 15;
	int column_two_width = 15;
		
	setConsole();

	cout << fixed << setprecision(2);
	
	cout << left << setw(column_one_width) << "PART NO." << left << setw(column_two_width) << "PRICE" << endl;
	
	cout << left << setw(column_one_width) << "T1267" << right << setw(column_two_width) << "$" << price1 <<;
	
	_getch();
	return 0;
}

void setConsole()
{

}
