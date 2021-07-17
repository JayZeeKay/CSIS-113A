/*
Jacob Marinas

ID: 0602306

July 16, 2021

Guided Practice 13A - 1D Arrays

Simple array creation and how loops can be used to access array elements

*/
#include <iostream>
#include <string>

using namespace std;

void fillArray(int a[], int size);
void printArray(int a[], int size);

int main()
{
	int ar[10];

	fillArray(ar, 10);
	printArray(ar, 10);

	return 0;
}

void fillArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
		a[i] = rand() % 10 + 1;
}

void printArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
		cout << a[i] << endl;
}