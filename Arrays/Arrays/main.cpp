#include <iomanip>//set precision, set width, octal
#include <iostream>//cin , cout
#include <conio.h>// _getch
#include <string>

using namespace std;

int main()//needs to run
{
	//declare variable
	double quantity;
	double cost;
	double total;
	
	//get input and show output
	cout << fixed << setprecision(2);
	cout << "Enter the number of books: ";
	cin >> quantity;
	cout << endl << "Enter the cost per book: ";
	cin >> cost;	
	cout << "\nThe total cost is: $" << quantity * cost;
	cout << endl << "\nPress any key to quit";

	_getch();
	return 0;
	//int cast truncates
	//indent for readability
	//how many bytes is a float (4)
	//trick question - what datatype
	//\n is new line, \\n would show the \n, \ is an escape character
	//without fixed, setprecision will show exactly the number of places indicated, not after the decimal
	//setwidth will only do the next cout in the ostream, sets width of column
	//floats induce rounding errors, int is more accurate, float more precise
	//describe a variable - named space in memory that can hold data
	//change the value of a variable not constant
	//sizeof(f) & sizeof(float) return the same result
	//c is precursor language to c++
	
}