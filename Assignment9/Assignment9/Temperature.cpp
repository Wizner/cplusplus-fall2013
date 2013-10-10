#include "Temperature.h"

Temperature::Temperature()
{
	celcius_ = 0;
	fahrenheit_ = 0;
}

Temperature::Temperature(double celcius, double fahrenheit)
{
	celcius_ = celcius;
	fahrenheit_ = fahrenheit;
}

double Temperature::celcius()
{
	return celcius_;
}

double Temperature::fahrenheit()
{
	return fahrenheit_;
}

void Temperature::set_celcius(double fahrenheit)
{
	double celcius_temp = (5.0 / 9.0) * (fahrenheit - 32.0);
	celcius_ = celcius_temp;
}

void Temperature::set_fahrenheit(double celcius)
{
	double fahrenheit_temp = 9.0 / 5.0 * celcius + 32.0;
	fahrenheit_ = fahrenheit_temp;
}