#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
#include "Point.h"

using namespace std;

void setConsole();

int main()
{
	setConsole();

	Point p;
	p.set_latitude(44.2656);
	p.set_longitude(88.4017);

	Point p2(44.2656, 88.4017);
	Point p3 = Point::random_point();	

	cout << "Point latitude: " << p.latitude() << endl;
	cout << "Point longitude: " << p.longitude() << endl << endl;
	cout << "Point (latitude,longitude): " << "(" << p3.latitude() << "," << p3.longitude() << ")" << endl;



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