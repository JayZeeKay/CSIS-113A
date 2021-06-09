#include <iostream>

using namespace std;

int main()
{
    int gallons, miles;

    // input
    cout << "Please enter the number of miles driven" << endl;
    cin >> miles;

    cout << "Please enter the amount of gallons used" << endl;
    cin >> gallons;

    // output
    cout << "You are getting " << miles / gallons << " Miles per gallon" << endl;

    return 0;
}