/*
Find the third angle of a triangle.
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter angles of triangle" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    c = 180 - a - b;
    cout << "third angle = " << c << endl;

    return 0;
}