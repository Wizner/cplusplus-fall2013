#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
#include <string>
using namespace std;

void printOutput(string, float);

const int COLUMN_ONE_WIDTH = 20;
const int COLUMN_TWO_WIDTH = 10;


int main()
{
	float first_num = 106.54;
	float second_num = 89.532;
	float third_num = 98.76;
	float total = first_num + second_num + third_num;
	float average = total / 3;	
			
	cout << left << setw(COLUMN_ONE_WIDTH) << "First number is: " << right << setw(COLUMN_TWO_WIDTH) << first_num << endl;
	cout << left << setw(COLUMN_ONE_WIDTH) << "Second number is: " << right << setw(COLUMN_TWO_WIDTH) << second_num << endl;
	cout << left << setw(COLUMN_ONE_WIDTH) << "Third number is: " << right << setw(COLUMN_TWO_WIDTH) << third_num << endl;
	cout.precision(1);
	cout << left << setw(COLUMN_ONE_WIDTH) << "Average is: " << right << setw(COLUMN_TWO_WIDTH) << fixed << average << endl;
	cout.precision(4);
	cout << left << setw(COLUMN_ONE_WIDTH) << "Total is: " << right << setw(COLUMN_TWO_WIDTH) << fixed << total << endl;
	
	_getch();
	return 0;
}


