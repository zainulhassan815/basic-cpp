/*
    Write a C++ program to find size of int, float, double, long and char in your system.
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Size of basic data types in bytes" << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of long: " << sizeof(long) << endl;
    cout << "Size of char: " << sizeof(char) << endl;
}