/*
Jacob Marinas

ID: 0602306

June 9, 2021

Assignment 2 - Creating Variables

Demonstrates using basic data types to create variables, to store, process, and retrieve information from them
*/
#include <iostream>

using namespace std;

int main()
{
	char theChar;
	double theDouble;
	int theInt;

	cout << "Enter a char, double, and an int" << endl;
	cin >> theChar >> theDouble >> theInt;

	theChar++;
	theDouble -= 2;
	theInt *= theInt;

	cout << "theChar: " << theChar << endl;
	cout << "theDouble: " << theDouble << endl;
	cout << "theInt: " << theInt << endl;

	return 0;
}