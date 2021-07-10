/*
Jacob Marinas

ID: 0602306

July 9, 2021

Guided Practice 10A - Value Producing Functions

How functions can be used to return a value
*/

#include <iostream>

using namespace std;

int getValue();
void squareValue();

int main()
{
	// int num;
	// num = getValue();
	// cout << "The value entered is " << num << endl;

	squareValue();

	return 0;
}

int getValue()
{
	int val;
	cout << "Enter a number" << endl;
	cin >> val;
	return val;
}

void squareValue()
{
	int num;
	num = getValue();
	cout << "The square of the number entered is " << num * num << endl;
}