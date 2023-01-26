/*
Write a program that inputs three digits and displays all possible combinations of these digits.
*/

#include <iostream>

using namespace std;

int main()
{
    int x, y, z;

    cout << "Enter three digits" << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "z: ";
    cin >> z;

    cout << x << y << z << endl;
    cout << x << z << y << endl;
    cout << y << x << z << endl;
    cout << y << z << x << endl;
    cout << z << y << x << endl;
    cout << z << x << y << endl;
    return 0;
}