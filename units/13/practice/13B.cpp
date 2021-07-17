/*
Jacob Marinas

ID: 0602306

July 16, 2021

Guided Practice 13B - Applicaton of Arrays

How can we use arrays to solve problems
*/

#include <iostream>
#include <time.h>

using namespace std;

void fillArray(int a[], int size);
int countEvens(int a[], int size);
int countOccurances(int a[], int size, int search);

int main()
{
	srand(static_cast<unsigned int>(time(0))); // Seeding the random number generator is needed to verify that countOccurances is working
	int ar[10];

	fillArray(ar, 10);
	
	for (int i = 0; i < 10; i++)
		cout << ar[i] << endl;

	int count = countEvens(ar, 10);
	cout << "There are " << count << " Even numbers in the array " << endl;

	int occurances = countOccurances(ar, 10, 1);

	cout << "There are " << occurances << " occurances of 1 in the array" << endl;

	return 0;
}

void fillArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
		a[i] = rand() % 10 + 1;
}

int countEvens(int a[], int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0)
			count++;
	}
	return count;
}

int countOccurances(int a[], int size, int search)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] == search)
			count++;
	}
	return count;
}