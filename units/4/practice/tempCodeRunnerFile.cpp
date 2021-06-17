/*
Jacob Marinas

ID: 0602306

June 16, 2021

Guided Practice 4A - The switch statement

Demonstrating the switch statement, testing a value and branching to the appropriate case
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	// Input 2 values, and pick from add, subtract, multiply, division operators
	int firstValue, secondValue, choice;

	cout << "Enter two values" << endl;
	cin >> firstValue >> secondValue;

	cout << "Enter an operation " << endl;
	cout << "1. Add the first and second values " << endl;
	cout << "2. Subtract the first value by the second value" << endl;
	cout << "3. Multiply the first and second values" << endl;
	cout << "4. Divide the first value by the second value" << endl;
	cin >> choice;

	switch (choice)
	{
		case 1:
			cout << "The sum of the values are " << firstValue + secondValue << endl;
			break;
		case 2:
			cout << "The difference of the values are " << firstValue - secondValue << endl;
			break;
		case 3:
			cout << "The product of the values are " << firstValue * secondValue << endl;
			break;
		case 4:
			cout << "The quotient of the values are " << (double) firstValue / secondValue << endl;		// casting to double so decimal is not truncated
			break;
		default:
			cout << "Invalid operation " << endl;
	}
	return 0;
}