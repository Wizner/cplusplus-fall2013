#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;


class Helper
{
	private:
		//nothing here
	public:
		Helper();
		bool IsNumeric(string);
		bool IsNumericInt(string);
		int ConvertToInt(string);
		double ConvertToDouble(string);
};
