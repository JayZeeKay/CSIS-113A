/*
Jacob Marinas

ID: 0602306

June 24, 2021

Guided Practice 6A - The for loop

How to write a for loop; create a multiplication table
*/

#include <iostream>

using namespace std;

int main()
{
	// Create a multiplication table to 9x9
	for (int row = 1; row <= 9; row++)
	{
		for (int col = 1; col <= 9; col++)
		{
			cout << row * col << "\t";
		}
		cout << endl;
	}
	
	return 0;
}