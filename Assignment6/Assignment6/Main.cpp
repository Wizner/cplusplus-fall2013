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

	//declare variables
	double fahrenheit;
	double celcius;
		
	//get input
	cout << fixed << setprecision(2);
	cout << "Please enter the temperature: ";
	cin >> celcius;
	cout << endl;

	//calculations
	fahrenheit = 1.8 * celcius + 32;
	
	//output
	cout << "The Celcius temperature is: " << celcius << endl;
	cout << "The Fahrenheit temperature is: " << fahrenheit << endl;
	

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