/*
Jacob Marinas

ID: 0602306

June 9, 2021

Guided Practice 2A - Console Input

How to input information from the keyboard into your program
*/

#include <iostream>

using namespace std;

int main()
{

	int age;

	cout << "Please enter your age " << endl;
	cin >> age;

	int sqAge = age * age;

	cout << sqAge << " is the square of your age " << endl;

	return 0;

}