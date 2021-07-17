/*
Jacob Marinas

ID: 0602306

July 16, 2021

Guided Practice 14A - 2D Arrays

How 2D arrays can be used to solve problems
*/

#include <iostream>

using namespace std;

void fillArray(int a[][5], int size);
void printArray(int a[][5], int size);
int countNums(int ar[][5], int size, int search);

int main()
{
	int ar[5][5];
	fillArray(ar, 5);
	printArray(ar, 5);

	cout << "What number do you want to search for? " << endl;
	int num;
	cin >> num;

	int count = countNums(ar, 5, num);
	cout << "Your number appears " << count << " times in the array" << endl;

	return 0;
}

void fillArray(int a[][5], int size) 
{
	for (int row = 0; row < 5; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			a[row][col] = rand() % 10 + 1;
		}
	}
}

void printArray(int a[][5], int size) 
{
	for (int row = 0; row < 5; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			cout << a[row][col] << "\t";
		}
		cout << endl;
	}
}

int countNums(int ar[][5], int size, int search)
{
	int count = 0;
	for (int row = 0; row < 5; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			if (ar[row][col] == search)
			{
				count++;
				cout << search << " was found at row " << row << ", column " << col << endl;	// Outputting what row and column the search was found in array
			}
		}
	}
	return count;
}