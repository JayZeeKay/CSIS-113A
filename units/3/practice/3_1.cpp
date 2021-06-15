#include <iostream>

using namespace std;

int main() 
{
	int number, output;
	cout << "Enter a number" << endl;
	cin >> number;

	output = number % 2 == 0 ? number * number * number : number * number;

	cout << "Your new number is " << output << endl;

	return 0;
}