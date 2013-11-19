#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	const int kRowLength = 10;
	const int kColumnLength = 10;
	int multiplication[kRowLength][kColumnLength];

	for (int i = 0; i < kRowLength; i++)
	{
		for (int j = 0; j < kColumnLength; j++)
		{
			multiplication[i][j] = (i + 1) * (j + 1);
		}		
	}

	for (int i = 0; i < kRowLength; i++)
	{
		for (int j = 0; j < kColumnLength; j++)
		{
			cout << setw(3) << multiplication[i][j] << " ";
		}
		cout << endl;
	}

	_getch();
	return 0;
}