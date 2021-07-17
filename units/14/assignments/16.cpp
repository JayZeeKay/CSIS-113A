/*
Jacob Marinas

ID: 0602306

July 17, 2021

Lab Assignment 16 - 2D Arrays

Test my knowledge of 2D Arrays and 2D array manipulation
*/

#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

void fill2DArray(int a[][10], int size);
void print2DArray(int a[][10], int size);
int getDivisible(int a[][10], int divide, int divisible[], int size);
void printArray(int a[], int size);

int main()
{
	srand(static_cast<unsigned int>(time(0)));	// Random seeding for better random numbers, to make sure everything works

	int ar[10][10];		// Array of 10 rows, 10 columns
	int divisible[100];	// An array initialized to allocate space for 100 elements, there can be no more than 100 elements since there are only 100 numbers

	// 1. Fill the 2D Array
	fill2DArray(ar, 10);

	// 2. Print the 2D array
	print2DArray(ar, 10);

	// 3. Get the number to divide by
	cout << "Enter a number to check divisibility by in the array" << endl;
	int num;
	cin >> num;

	// 4. Call getDivisible to create the list of values evenly divisible by the number input
	int count = getDivisible(ar, num, divisible, 10);	// A count variable is used to display how many evenly divisible numbers there are and also works as the size of the divisible array

	// 5. Report to the screen the number of values that were found to be evenly divisible
	cout << "There are " << count << " evenly divisible numbers. They are " << endl;

	// 6. Call print array to print out the array of evenly divisible numbers
	printArray(divisible, count);

	return 0;
}

// Fills a 10x10 array with random numbers range 1-1000
void fill2DArray(int a[][10], int size)
{
	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < size; col++)
		{
			a[row][col] = rand() % 1000 + 1;
		}
	}
}

// Prints a 10x10 array in row column fashion
void print2DArray(int a[][10], int size)
{
	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < size; col++)
		{
			cout << a[row][col] << "\t";
		}
		cout << endl;
	}
}

// Searches 2D array for values that are evenly divisible by a given number
int getDivisible(int a[][10], int divide, int divisible[], int size)
{
	int count = 0;
	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < size; col++)
		{
			if (a[row][col] % divide == 0)
			{
				divisible[count] = a[row][col];
				count++;
			}
		}
	}
	return count;
}

// Prints a single dimensional array of any size
void printArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
		cout << a[i] << endl;
}