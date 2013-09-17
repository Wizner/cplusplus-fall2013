#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
#include <math.h>
using namespace std;
 
void setConsole();
 
int main()
{
	setConsole();

	double num_one;
	double num_two;
	double num_one_squared;
	double num_two_squared;
	double num_answer;
		
	cout << fixed << setprecision(5);

	//get input
	cout << "Please enter the 1st number: ";
	cin >> num_one;
	cout << "Please enter the 2nd number: ";
	cin >> num_two;

	//calculations
	num_one_squared = num_one * num_one;
	num_two_squared = num_two * num_two;
	num_answer = num_one + num_two / num_one * num_two;

	//output
	cout << "Number 1: " << num_one << "  Number 1 Squared: " << num_one_squared << endl;
	cout << "Number 2: " << num_two << "  Number 2 Squared: " << num_two_squared << endl;
	cout << "num_one + num_two / num_one * num_two: " << num_one + num_two / num_one * num_two << endl;
	cout << "Round Answer Up: " << ceil(num_answer) << endl;
	cout << "Round Answer Down: " << floor(num_answer) << endl;
	cout << "Square root num_one: " << sqrt(num_one) << endl;
	cout << "Square root num_two: " << sqrt(num_two) << endl;
	cout << "num_one ^ num_two: " << pow(num_one, num_two) << endl;
	cout << "num_one / num_two: " << num_one / num_two << endl;
	cout << "num_one mod num_two: " << (int)num_one % (int)num_two << endl;
	cout << "Random number: " << rand() * clock() % 100 << endl;
	cout << "Random number: " << rand() * clock() % 100 << endl;;
	cout << "Random number: " << rand() * clock() % 100 << endl;;
	cout << "Random number: " << rand() * clock() % 100 << endl;;
	cout << "clock: " << clock() << endl;
	cout << "clock: " << clock() << endl;
	cout << "clock: " << clock() << endl;
	cout << "clock: " << clock() << endl;
	


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