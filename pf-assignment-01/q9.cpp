/*
Take values of length and breadth from user and check if it is a square or not.
*/

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "lenght: ";
    cin >> x;
    cout << "breadth: ";
    cin >> y;

    if (x == y)
        cout << "shape is a square." << endl;
    else
        cout << "shape is not a square." << endl;

    return 0;
}