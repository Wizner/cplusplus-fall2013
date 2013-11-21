#include <conio.h>
#include <iostream>
#include "Collection.h"

using namespace std;

int main()
{
	Collection c(3);
	c[0] = 99;
	c[1] = 77;
	c[2] = 88;
	int num[] = {12, 14, 18, 35};

	for (int i = 0; i < 4; i++)
	{
		c.add(num[i]);
	}

	cout << c << endl;

	_getch();
	return 0;
}