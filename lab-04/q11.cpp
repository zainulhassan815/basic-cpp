/*
Write a program that inputs a number and displays whether it is divisible by 3 or not by using
conditional operators.
*/

#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter number: ";
    cin >> x;

    if (x % 3 == 0)
        cout << x << " is divisible by 3." << endl;
    else
        cout << x << " is not divisible by 3." << endl;

    return 0;
}