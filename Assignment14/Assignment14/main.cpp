#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	const int kRowLength = 2;
	const int kColumnLength = 3;

	int numbers1[kRowLength][kColumnLength] = {{16, 18, 23}, {54, 91, 11}};
	int numbers2[kRowLength][kColumnLength] = {{14, 52, 77}, {16, 19, 59}};
	int numbers3[kRowLength][kColumnLength];

	//initialize the third array of numbers
	for (int i = 0; i < kRowLength; i++)
	{
		for (int j = 0; j < kColumnLength; j++)
		{
			numbers3[i][j] = numbers1[i][j] + numbers2[i][j];
		}		
	}

	//display the first 2D array of numbers
	cout << "First 2D array of numbers:" << endl;
	for (int i = 0; i < kRowLength; i++)
	{
		for (int j = 0; j < kColumnLength; j++)
		{
			cout << setw(6) << numbers1[i][j];
		}
		cout << endl;
	}

	cout << endl << endl;

	//display the second 2D array of numbers
	cout << "Second 2D array of numbers:" << endl;
	for (int i = 0; i < kRowLength; i++)
	{
		for (int j = 0; j < kColumnLength; j++)
		{
			cout << setw(6) << numbers2[i][j];
		}
		cout << endl;
	}

	cout << endl << endl;

	//display the two arrays with equivalent elements added together
	cout << "Third 2D array of numbers:" << endl; 
	for (int i = 0; i < kRowLength; i++)
	{
		for (int j = 0; j < kColumnLength; j++)
		{
			cout << setw(6) << numbers3[i][j];
		}
		cout << endl;
	}

	cout << "\n\n\nOn the third 2D array, I added equivalent elements from the first two arrays" << endl;

	_getch();
	return 0;
}