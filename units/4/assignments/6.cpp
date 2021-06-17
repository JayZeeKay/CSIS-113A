/*
Jacob Marinas

ID: 0602306

June 16, 2021

Lab Assignment 6 - The Switch Statement

A simple calculator program, that takes two whole numbers and performs a math operation on them
*/
#include <iostream>

using namespace std;

int main()
{
	int firstValue, secondValue;
	char operation;			// I tried using operator but it does not work because it seems to be a key word

	cout << "Enter an expression to calculate" << endl;
	cin >> firstValue >> operation >> secondValue;

	switch (operation)
	{
		case '+':
			cout << "The sum is " << firstValue + secondValue << endl;
			break;
		case '-':
			cout << "The difference is " << firstValue - secondValue << endl;
			break;
		case '*':	// * and x are both typed by people to represent multiplication 
		case 'x':
			cout << "The product is " << firstValue * secondValue << endl;
			break;
		case '/':
			cout << "The quotient is " << (double) firstValue / secondValue << endl;	// casting double so decimal is not truncated
	}
	return 0;
}