#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int length = 7;
	int numbers[] = {7, 23, 21, 55, 6, 9, 76};

	//sort the array
	bool is_sorted = true;

	//loop until the array is sorted
	do
	{
		is_sorted = true;
		//check every element to see if sorted
		for (int i = 0; i < length - 1; i++)
		{
			if (numbers[i] > numbers[i + 1])	
			{
				int temp = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = temp;
				is_sorted = false;
			}
		}

		for (int i = 0; i < length; i++)
		{
			cout << numbers[i] << endl;
		}
		cout << "-------------------" << endl;
	} while(!is_sorted);

	

	_getch();
	return 0;
}