/*
Jacob Marinas

ID: 0602306

June 24, 2021

Lab Assignment 7 - The For Loop

Write a program that will accept n integers and outputs the largest and smallest values entered
*/

#include <iostream>
#include <limits.h>	// included for INT_MIN, INT_MAX constants

using namespace std;

int main()
{
	// Reference: https://www.cplusplus.com/reference/climits/
	// I use the defined int maximum and minimum constants in the limits header file, instead of just using an arbitrary large and small number
	// It is extremely probable that the user will input values that will update the largest and smallest values accordingly
	int times, val = 0, largest = INT_MIN, smallest = INT_MAX;
	// "We will assume that at least one number is going to be input"
	cout << "How many numbers do you want to enter" << endl;
	cin >> times;

	for (int i = 0; i < times; i++)
	{
		// To know what iteration this loop is at, for testing only
		// cout << "STEP " << i << endl;

		cout << "Enter a number" << endl;
		cin >> val;
		if (val > largest)
			largest = val;	// if number inputted is greater than largest, assign number to largest as it is the new largest number
		if (val < smallest)
			smallest = val;	// likewise with smallest
		
		// To see if the largest and smallest numbers are updating as intended, for testing only
		// cout << "Largest: " << largest << endl;
		// cout << "Smallest: " << smallest << endl;
	}

	cout << "The largest number was " << largest << endl;
	cout << "The smallest number was " << smallest << endl;

	return 0;

}