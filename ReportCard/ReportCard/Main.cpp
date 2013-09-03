#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
using namespace std;

void setConsole();

int main()
{
	float score1 = .95f;
	float score2 = 1;
	float score3 = .05f;

	float average = (score1 + score2 + score3) / 3.0;

	int column_one_width = 40;
	int column_two_width = 6;
		
	setConsole();

	cout << fixed << setprecision(2);
	
	cout << "\t\t  Report Card" << endl;
	cout << setfill('-');
	cout << left << setw(column_one_width + column_two_width) << "-" << endl;
	cout <<setfill(' ');
	cout << left << setw(column_one_width) << "Assignment" << left << setw(column_two_width) << "Score" << endl << endl;
	cout << setfill('-');
	cout << left << setw(column_one_width + column_two_width) << "-" << endl;

	cout << setfill('.');

	cout << left << setw(column_one_width) << "#1: Hello World ";
	cout << right << setw(column_two_width) << score1 * 100 << "%" << endl;

	cout << left << setw(column_one_width) << "#2: Miles Calculator ";
	cout << right << setw(column_two_width) << score2 * 100 << "%" << endl;

	cout << left << setw(column_one_width) << "#3: String Formatting ";
	cout << right << setw(column_two_width) << score3 * 100 << "%" << endl << endl;

	cout << setfill('-');
	cout << left << setw(column_one_width + column_two_width) << "-" << endl;

	cout << setfill(' ') << endl;
	cout << left << setw(column_one_width) << "Average Scores" << left << setw(column_two_width) << average * 100 << "%" << endl;	

	_getch();
	return 0;
}

void setConsole()
{

}
