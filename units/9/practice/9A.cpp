/*
Jacob Marinas

ID: 0602306

June 29, 2021

Guided Practice 9A - Simple Functions

How to create simple functions
*/

#include <iostream>

using namespace std;

void printName();
void printDate();

int main()
{
	printName();
	return 0;
}

void printName()
{
	cout << "Hello from Glenn" << endl;
	printDate();
	return;
}

void printDate()
{
	cout << "As of writing, Today is June 29, 2021" << endl;
}