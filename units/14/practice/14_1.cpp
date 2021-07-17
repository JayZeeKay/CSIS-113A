#include <iostream>

using namespace std;

void printArr(int ar[][9], int size);

int main()
{
	int ar[9][9];

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			ar[i - 1][j - 1] = i * j;
		}
	}

	printArr(ar, 9);
	return 0;
}

void printArr(int ar[][9], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << ar[i][j] << "\t";
		}
		cout << endl;
	}
}