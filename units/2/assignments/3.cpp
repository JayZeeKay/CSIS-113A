/*
Jacob Marinas

ID: 0602306

June 9, 2021

CSIS 113A Lab Assignment 3 - Simple Math & Variables

Program that converts degrees in Fahrenheit into degrees in Celsius and Kelvin
*/
#include <iostream>

using namespace std;

int main()
{

	double fahrenheit, celsius, kelvin;

	cout << "Enter the degrees in Fahrenheit to convert" << endl;
	cin >> fahrenheit;

	celsius = (fahrenheit - 32) * 5 / 9;
	kelvin = celsius + 273.15;		// instead of using the whole formula, save some calculation by reusing celsius variable

	cout << "In Celsius the temperature is " << celsius << endl;
	cout << "In Kelvin the temperature is " << kelvin << endl;

	return 0;

}