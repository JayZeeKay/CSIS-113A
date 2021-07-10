/*
Jacob Marinas

ID: 0602306

July 9, 2021

Guided Practice 10B - Parameter Functions

Creating proper functions that take in parameters; loosely coupled and highly cohesive
*/

#include <iostream>

using namespace std;

int getValue();
int cubeIt(int x);
int product(int a, int b);
double sumIt(double a, double b, double c);

int main()
{
	// int num;
	// num = getValue();
	// int cube = cubeIt(num);
	// cout << "The value you entered is " << getValue() << endl;

	double first, second, third;
	cout << "Enter three decimal numbers" << endl;
	cin >> first >> second >> third;
	cout << "The sum of the three numbers are " << sumIt(first, second, third) << endl;

	return 0;
}

int getValue()
{
	int val;
	cout << "Enter a number " << endl;
	cin >> val;
	return val;
}

int cubeIt(int x)
{
	return x * x * x;
}

int product(int a, int b)
{
	return a * b;
}

double sumIt(double a, double b, double c)
{
	return a + b + c;
}
