/*
Jacob Marinas

ID: 0602306

June 16, 2021

Guided Practice 3A - The bool type

How the bool data type can be used to test for truth in programs
*/
#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cout << "Enter two values" << endl;
	cin >> x >> y;

	bool val = x < y;	// true when x is smaller than y

	if (val)
	{
		cout << x << " is the smaller number" << endl;
	}

	return 0;
}