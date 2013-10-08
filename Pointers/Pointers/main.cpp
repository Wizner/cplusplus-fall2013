#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
using namespace std;

void setConsole();
void pointers();
int growByOne(int*, int);

int main()
{
	setConsole();

	int* numbers = new int [5];
	int* more_numbers = new int [10];
	numbers[0] = 5;
	numbers[1] = 6;
	numbers[2] = 7;
	numbers[3] = 8;
	numbers[4] = 9;
	more_numbers[0] = 99;
	//numbers = growByOne(numbers, 5);
	growByOne(numbers, 5);
	cout << numbers[5];



	_getch();
	return 1;
}

int growByOne(int* myarray, int myarray_length)
{
	int* new_array = new int[myarray_length + 1];
	for (int i = 0; i < myarray_length + 1; i++)
	{
		new_array[i] = myarray[i];
	}
	new_array[myarray_length] = 0;
	return *new_array;	
}

void pointers()
{
	int i = 5;
	int* p = new int;
	*p = 6;
	cout << "int i: " << i << endl;
	cout << "&i: " << &i << endl;
	cout << "int* p: " << p << endl;
	cout << "*p: " << *p << endl;
	cout << "&p: " << &p << endl;
	p = &i;
	i = 99;
	cout << "p after &i: " << p << endl;
	cout << "*p after &i: " << *p << endl;
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