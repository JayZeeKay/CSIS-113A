/*
Jacob Marinas

ID: 0602306

July 23, 2021

Guided Practice 15C - Pointers to Functions

How we can use pointers to refer to functions
*/

#include <iostream>

using namespace std;

void one();
void two();
void three();
void four();

int main()
{
	void (*func[4]) ();

	func[0] = one;
	func[1] = two;
	func[2] = three;
	func[3] = four;

	for (int i = 0; i < 4; i++)
	{
		func[i]();
	}
	return 0;
}

void one()
{
	cout << "Hello from one" << endl;
}

void two()
{
	cout << "Hello from two" << endl;
}

void three()
{
	cout << "Hello from three" << endl;
}

void four()
{
	cout << "Hello from four" << endl;
}