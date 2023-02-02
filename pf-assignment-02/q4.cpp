/*
Check whether a number is positive, negative or zero.
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (num > 0)
        cout << num << " is positive.";
    else if (num < 0)
        cout << num << " is negative.";
    else
        cout << "Number is zero";

    return 0;
}