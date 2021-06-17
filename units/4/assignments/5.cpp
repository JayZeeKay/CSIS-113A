/*
Jacob Marinas

ID: 0602306

June 16, 2021

Lab Assignment 5 - The Conditional (ternary) Operator

A program that takes in a number input and determines if the number is odd or even
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int number;
	string result;

	cout << "Enter a number and I will determine if it is even or odd" << endl;
	cin >> number;

	result = number % 2 ? "Odd" : "Even";
	// When number % 2 is evaluated, the two possible results are 0 and 1
	// 0 means that the number is even, 1 means that the number is odd
	// 1 also means true, so "Odd" is put in the true expression. 0 means false, so "Even" is put in the false expression
	cout << "Your number is " << result << endl;

	return 0;
}