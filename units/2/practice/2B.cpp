/*
Jacob Marinas

ID: 0602306

June 9, 2021

Guided Practice 2B - Math Operators

How to input information from the keyboard into your program and process it with math operators
*/

#include <iostream>

using namespace std;

int main()
{

	int x, y;
	int sum, difference, product, quotient, remainder;

	cout << "Please enter two numbers " << endl;
	cin >> x >> y;

	sum = x + y;
	difference = x - y;
	product = x * y;
	quotient = x / y;
	remainder = x % y;

	cout << "The sum of your values is " << sum << endl;
	cout << "The difference of your values is " << difference << endl;
	cout << "The product of your values is " << product << endl;
	cout << "The quotient of your values is " << quotient << endl;

	cout << "The remainder of your divison is " << remainder << endl;

	return 0;
	
}