#include <iostream>
using namespace std;

class Superhero
{
private:
	string first_name_;
	string last_name_;
	string power_;
	string name_;

public:
	Superhero();
	Superhero(string, string, string, string);

	string first_name();
	string last_name();
	string power();
	string name();

	void set_first_name(string);
	void set_last_name(string);
	void set_power(string);
	void set_name(string);
	
		
};
