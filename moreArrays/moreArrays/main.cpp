#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
#include <string>
using namespace std;

void setConsole();
int smallest(int numbers[], int numbers_length);
int array_length(int numbers[]);

int main()
{
	setConsole();

	const int numbers_length = 5;
	int numbers[] = {1, 2, 3, 4, 5};

	int *numbers_new = new int[];
	
	int total = 0;

		
	for (int i = 0; i < numbers_length; i++)
	{
		cout << "Number " << i + 1 << ": " << numbers[i] << endl;
		total += numbers[i];		
	}	

	cout << endl << "The sum of the arrray is: " << total << endl;
	cout << "The smallest number is: " << smallest(numbers, numbers_length) << endl;
	array_length(numbers);

	_getch();
	return 0;
}

int array_length(int numbers[])
{
	int length = sizeof(numbers) / sizeof(numbers[0]);
	cout << "The length of the array is: " << length << endl;
	return length;
}

int smallest(int numbers[], int numbers_length)
{
	int smallest = numbers[0];
	
	for (int i = 0; i < numbers_length; i++)
	{		
		if (numbers[i] < smallest)
		{
			smallest = numbers[i];
		}
	}
	return smallest;
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