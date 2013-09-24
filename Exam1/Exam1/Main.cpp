#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
	//declare variables
	double milesDriven;
	double gallonsUsed;
	double milesPerGallon;
	
	//get input 
	cout << "Please enter the number of miles driven: ";
	cin >> milesDriven;
	cout << "Please enter the number of gallons used: ";
	cin >> gallonsUsed;

	//do calculation
	milesPerGallon = milesDriven / gallonsUsed;

	//display output
	cout << setprecision(1) << fixed;
	cout << endl << left << setw(25) << "Number of miles driven:" << right << setw(5) << milesDriven;
	cout << endl << left << setw(25) << "Number of gallons used:" << right << setw(5) << gallonsUsed;
	cout << endl << left << setw(25) << "Miles per gallon:" << right << setw(5) << milesPerGallon;
	
	_getch();
	return 0;
}