/*
Jacob Marinas

ID: 0602306

July 16, 2021

Lab Assignment 15 - Arrays as Arguments

To test my understanding of array creation, how loops can be used to access array elements, and how to pass arrays to functions
*/

#include <iostream>
#include <time.h>

using namespace std;

void fillArray(int a[], int size);
void printArray(int a[], int size);
int countEvens(int a[], int size);

int main()
{
	srand(static_cast<unsigned int>(time(0))); // Seeding the random number generator

	int ar[25];

	// Fill the array
	fillArray(ar, 25);

	// Print the array
	printArray(ar, 25);

	// Print the number of even numbers in the array
	cout << "There are " << countEvens(ar, 25) << " even numbers in the array" << endl;

	return 0;
}

void fillArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
		a[i] = rand() % 100 + 1;	// Range from 1 - 100 using mod 100
}

void printArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
		cout << a[i] << endl;
}

int countEvens(int a[], int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0)	// Even numbers in mod 2 equal 0
			count++;
	}
	return count;
}