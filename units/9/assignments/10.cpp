/*
Jacob Marinas

ID: 0602306

June 29, 2021

Lab Assignment 10 - Functions

Modify Lab 9 so that the calculations for temperature conversions are done with functions
*/
#include <iostream>

using namespace std;

double C2F(double celsius);	// Function prototypes so that the compiler has definitions to work with
double K2F(double kelvin);
double N2F(double newton);

int main()
{
	cout << "This temperature conversion program converts other temperature types to Fahrenheit" << endl;
	cout << "The temperature types are: " << endl;
	cout << "C - Celsius" << endl;
	cout << "K - Kelvin" << endl;
	cout << "N - Newton" << endl;
	cout << "X - exit" << "\n" << endl;

	cout << "Enter the value of the temperature and one of the temperature types" << endl;
	cout << "For example, to convert 32 degrees from Celsius to Fahrenheit you should type: " << endl;
	cout << "32 C" << "\n" << endl;

	double value; // The numeric input for your program should be of type double
	char unit;
	cout << "Please enter a value and its type to be converted" << endl;
	cin >> value >> unit;

	while (unit != 'X') 	// Loops as long as the unit entered is not X; if it is X, the user wants to exit, and it makes the while condition false, so it exits the loop
	{
		// No need to include case 'X' as the unit is checked prior to the switch statement in the while condition
		switch (unit)
		{
			case 'K':
				cout << value << " " << unit << " is " << K2F(value) << " in Fahrenheit" << endl;
				break;
			case 'C':
				cout << value << " " << unit << " is " << C2F(value) << " in Fahrenheit" << endl;
				break;
			case 'N':
				cout << value << " " << unit << " is " << N2F(value) << " in Fahrenheit" << endl;
				break;
			default:
				cout << "Invalid input" << endl;
		}
		cout << "Please enter a value and its type to be converted" << endl;
		cin >> value >> unit;
	}

	return 0;
}

// Functions for temperature conversions

double C2F(double celsius)
{
	return celsius * 9 / 5 + 32;
}

double K2F(double kelvin)
{
	return (kelvin - 273.15) * 1.8 + 32;
}

double N2F(double newton)
{
	return newton * 60 / 11 + 32;
}