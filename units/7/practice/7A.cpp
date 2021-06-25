/*
Jacob Marinas

ID: 0602306

June 24, 2021

Guided Practice 7A - Random Numbers

How to properly use rand() and srand() so there is a more true random sampling

*/

#include <iostream>
#include <ctime>

using namespace std;

// function has to be placed above main so that when randRange is used in main, it knows what it is
int randRange(int min, int max)		// return type int, takes in two ints, min and max
{
	return (rand() % (1 + max - min)) + min;	// can just take the formula and put it into the return statement
}

int main()
{
	int min, max;

	srand((unsigned int)time(0));

	cout << "Enter your min value" << endl;
	cin >> min;

	cout << "Enter your max value" << endl;
	cin >> max;

	for (int j = 0; j < 10; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << randRange(min, max) << "\t";
		}
		cout << endl;
	}
	return 0;
}
