/*
Write a recursive function which will accept two parameters base and height and will
calculate power
*/

#include <iostream>

using namespace std;

int pow(int base, int exponent)
{
    if (exponent == 0)
        return 1;
    else
        return base * pow(base, exponent - 1);
}

int main()
{
    int base, power;
    cout << "base: ";
    cin >> base;
    cout << "power: ";
    cin >> power;

    cout << base << "^" << power << " = "
         << pow(base, power) << endl;
    return 0;
}