#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double taxRate, principal;

    cout << "Enter the tax rate" << endl;
    cin >> taxRate;

    cout << "Enter the principal" << endl;
    cin >> principal;

    double amount = principal * taxRate;
    cout << setprecision(4) << ios::fixed << "The tax owed is $" << amount << endl;

    return 0;

}