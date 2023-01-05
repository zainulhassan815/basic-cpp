/*
    Write a C++ program to prompt the user to input 3 integer values (multiple cin) and print these values in forward and reversed order.
*/

#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter three numbers" << endl;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;

    cout << "Reverse printing numbers:" << endl;
    cout << z << y << x << endl;
    return 0;
}