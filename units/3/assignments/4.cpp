/*
Jacob Marinas

ID: 0602306

June 16, 2021

Lab Assignment 4 - Making Decisions

Create a mileage calculator to calculate the amount of money that should be paid to employees
*/
#include <iostream>

using namespace std;

int main()
{
	double miles, amount;				// miles is double just in case user may need to calculate decimal miles

	cout << "Enter the number of miles driven" << endl;
	cin >> miles;

	if (miles < 0)
	{
		amount = 0;				// To account for negative input, assume nothing is owed since negative dollars does not make sense
							// Could let the user know that only positive numbers are valid, but restriction of project says cannot use cout inside if statement
	}
	else if (miles <= 100)
	{
		amount = miles * 0.25;
	}
	else 
	{
		amount = 25 + (.15 * (miles - 100));	// 100 * .25 can be simplified to save calculation. To get "every mile above 100", subtract 100 from miles
	}

	cout << "You are owed " << amount << " dollars" << endl;

	return 0;
}