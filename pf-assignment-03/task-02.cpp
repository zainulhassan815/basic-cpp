/*
Create a C++ Program to Get the Value from the Address Using Pointers
*/

#include <iostream>

using namespace std;

int main()
{
    int num = 10;
    int *ptr = &num;

    cout << "Address of num = " << ptr << endl;
    cout << "Value of num = " << *ptr << endl;
    return 0;
}