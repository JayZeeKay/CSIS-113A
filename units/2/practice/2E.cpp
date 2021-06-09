#include <iostream>
#include <iomanip> 

using namespace std; 

int main()
{

int quarters, dimes, nickles, pennies; 

    cout << "Enter the number of quarters, dimes, nickles, pennies " << endl;
    cin >> quarters >> dimes >> nickles >> pennies;
    double dollars = (quarters / 4.0) + (dimes / 10.0) + (nickles / 20.0) + (pennies / 100.0); 

    cout << fixed << setprecision(2);
    cout << "You have " << dollars << " dollars in change " << endl; 

    return 0;  

} 