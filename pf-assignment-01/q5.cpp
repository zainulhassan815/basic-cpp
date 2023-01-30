/*
Find Quotient and Remainder.
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, quotient, remainder;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    quotient = a / b;
    remainder = a % b;

    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}