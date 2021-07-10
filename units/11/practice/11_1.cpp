#include <iostream>

using namespace std;

double avg(double a, double b);
double avg(double a, double b, double c);

int main()
{
	cout << avg(2, 4) << endl;
	cout << avg(2, 4, 6) << endl;
	return 0;
}

double avg(double a, double b)
{
	return (a + b) / 2.0;
}

double avg(double a, double b, double c)
{
	return (a + b + c) / 2.0;
}