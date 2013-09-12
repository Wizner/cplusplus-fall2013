#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

const int COLUMN_ONE_WIDTH = 10;
const int COLUMN_TWO_WIDTH = 5;

int main()
{
	int int_value = 32;
	double double_value = 42.98765;

	cout << "The hex of 32 is: " << hex << int_value << endl; // expressed in hexadecimal base (i.e., radix 16)
	cout << "The octal of 32 is: " << oct << int_value << endl; // expressed in octal base (i.e., radix 8)
	cout << endl;
	cout << "|" << setw(10) << setprecision(3) << fixed << double_value << "|" << endl;
	cout << "|" << setw(10) << setprecision(4) << fixed << double_value << "|" << endl;
	cout << "|" << setw(10) << setprecision(5) << fixed << double_value << "|" << endl;
	cout << "|" << setw(10) << setprecision(6) << fixed << double_value << "|" << endl;
	cout << endl;
	cout << "|" << setw(5) << dec << int_value << "|" << setw(10) << setprecision(2) << fixed << double_value << "|" << endl;

	_getch();
	return 0;

	// When I changed the double to a float, the last value did not end with a zero, it ended with a 2.
	// This is because when you use a float, it does inaccurate rounding of decimals.
}


