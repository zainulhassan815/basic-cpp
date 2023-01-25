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

    // i = x
    // j = y
    // k = z

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                cout << i << j << k << endl;
            }
        }
    }
    return 0;
}