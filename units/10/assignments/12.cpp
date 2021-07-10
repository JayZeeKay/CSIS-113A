/*
Jacob Marinas

ID: 0602306

July 9, 2021

Lab Assignment 12 - Functions and the Math Library

Create a function that can solve the length of the third side of a right triangle, given two known sides
*/

#include <iostream>
#include <cmath>

using namespace std;

double pythag(double first, double second, char third);

int main()
{
	double first, second;
	char third;
	cout << "Enter the values of two sides and a character to indicate the third side to solve for" << endl;
	cout << "The valid character inputs are A, B, and C" << endl;
	cin >> first >> second >> third;
	
	cout << "The third side is equal to " << pythag(first, second, third) << endl;

	return 0;
}

double pythag(double first, double second, char third)
{
	double a, b, c;	// Creating extra variables to help is permitted, isn't in the "What not to do"
	switch (third) 
	{
		case 'A':
			if (first > second)
			{
				c = first;	// The hypotenuse is always larger than the other two sides in a right triangle
				b = second;	// So the larger of the two numbers is assigned to c, the hypotenuse
			}
			else
			{
				c = second;
				b = first;
			}
			return sqrt(pow(c, 2.0) - pow(b, 2.0));
		case 'B':
			if (first > second)
			{
				c = first;
				a = second;
			}
			else
			{
				c = second;
				a = first;
			}
			return sqrt(pow(c, 2.0) - pow(a, 2.0));
		case 'C':
			return sqrt(pow(first, 2.0) + pow(second, 2.0));	// Doesn't matter which is larger, both sides are added so order doesn't matter
		default:
			return -1;
	}
}

