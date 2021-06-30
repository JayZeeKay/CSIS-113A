#include <iostream>

using namespace std;

void squareInput();
void gotoSquareInput();

int main()
{
	gotoSquareInput();
	return 0;
}

void squareInput()
{
	int num;
	cout << "Enter a number" << endl;
	cin >> num;
	cout << "The square is " << num * num << endl;
}

void gotoSquareInput()
{
	squareInput();
}