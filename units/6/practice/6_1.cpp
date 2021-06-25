#include <iostream>

using namespace std;

int main()
{
	int number;

	cout << "Enter a number" << endl;
	cin >> number;
	//cout << number << endl;

	int sum = 0;

	for (int i = 1; i < number; i++)
	{
		// cout << "i: " << i << endl;
		// cout << "sum: " << sum << endl;

		if (number % i == 0)
			sum += i;
	}

	if (sum == number) 
		cout << "Your number is a perfect number" << endl;
	else
		cout << "Your number is not a perfect number" << endl;

	return 0;
}