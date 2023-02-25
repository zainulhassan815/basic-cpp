/*
Write a C++ program to find Least Common Multiple (LCM) of two numbers. For example, if user
enters 2 and 5 then LCM of the values will be 10.
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, max, lcm;
    cout << "Enter numbers" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    max = a > b ? a : b;

    while (true)
    {
        if (max % a == 0 && max % b == 0)
        {
            lcm = max;
            break;
        }
        max++;
    }

    cout << "LCM of " << a << " and " << b << " is: " << lcm << endl;
    return 0;
}