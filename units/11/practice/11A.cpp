/*
Jacob Marinas

ID: 0602306

July 9, 2021

Guided Practice 11A - Scope

How to overload functions
*/

#include <iostream>

using namespace std;

void printX();
void getX();

int x = 0;	// Global variables are bad practice because they can be seen and modified by any function causing unintended behavior

int main()
{
	getX();
	printX();
	return 0;
}

void printX()
{
	cout << "The value of x is " << x << endl;
}

void getX()
{
	int x;	
	cout << "Enter a value for x " << endl;
	cin >> x;	// This x has local scope, and will not be assigned to the global scope x. When the function exits, local x gets destroyed
}