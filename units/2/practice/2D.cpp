#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter a number" << endl;
    cin >> number;

    cout << "The right-most digit of " << number << " is " << number % 10 << endl;
    
    return 0;
}