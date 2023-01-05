/*
    Write a program to swap the values of two variable without using third variable.
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int b = 5;

    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    a = a * b; // a = 3 * 5 = 15

    b = a / b; // b = 15 / 3 = 5
    a = a / b; // a = 15 / 5 = 3

    cout << "After swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}