/*
Jacob Marinas

ID: 0602306

June 9, 2021

Assignment 1 - Console Output

This is lab 1 which outputs to the screen my personal information
*/

#include <iostream>

using namespace std;

int main()
{

    // reference doc for endl: https://www.cplusplus.com/reference/ostream/endl/
    // endl is a manipulator function used with the insertion (<<) operator; like operations in math, you can use them as many times as needed

    cout << "First Name: Jacob " << endl << endl;                          // using endl twice achieves "all on separate lines doubled spaced"
    cout << "Last Name: Marinas" << endl << endl;
    cout << "Email Address: jmarinas306@student.msjc.edu" << endl << endl;
    cout << "Assignment Due Date: June 13, 2021 at 11:59 PM" << endl;      // last line doesn't require endl twice to double space all lines

    return 0;

}