/*
Jacob Marinas

ID: 0602306

July 9, 2021

Guided Practice 11C - Function Overloading

How to overload functions, to have multiple functions with the same name
*/

#include <iostream>

using namespace std;

int sumInt(int a, int b);
int sumInt(int a, int b, int c);
int sumInt(int a, int b, int c, int d);


int main()
{
	cout << "Enter four numbers and I will sum them" << endl;
	int w, x, y, z;
	cin >> w >> x >> y >> z;
	
	int mySum = sumInt(w, x, y, z);

	cout << "The sum of your numbers is " << mySum << endl;

	return 0;
}

int sumInt(int a, int b)
{
	return a + b;
}

int sumInt(int a, int b, int c)
{
	return sumInt(sumInt(a,b), c);
}
int sumInt(int a, int b, int c, int d)
{
	return sumInt(sumInt(sumInt(a,b), c), d);
}