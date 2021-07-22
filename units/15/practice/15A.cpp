/*
Jacob Marinas

ID: 0602306

July 22, 2021

Guided Practice 15A - Pointers

How to use pointers
*/

#include <iostream>

using namespace std;

int main()
{
	int *p;
	
	int ar[] = {1,2,3,4,5,6,7,8,9,10};

	p = &ar[9];	// Has the address of the last element in the array

	for (int i = 0; i < 10; i++)
		cout << *p-- << endl;	// Decrements from the address of the last element in the array, so goes to previous element

	return 0;
}