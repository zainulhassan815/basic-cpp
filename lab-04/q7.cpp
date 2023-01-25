/*
Write a program that inputs three numbers and displays the smallest number by using nested
if conditions.
*/

#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "z: ";
    cin >> z;

    // smallest
    // x < y and x < z => x
    // y < x and y < z => y
    // z < x and z < y => z

    if (x < y)
    {
        if (x < z)
            cout << "x(" << x << ") is smallest" << endl;
    }
    else if (y < z)
    {
        cout << "y(" << y << ") is smallest" << endl;
    }
    else
    {
        cout << "z(" << z << ") is smallest" << endl;
    }
    return 0;
}