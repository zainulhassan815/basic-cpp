/*
Use for loops to construct a program that displays a pyramid of Xs on the screen. Take number of
rows as input.
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "X";
        }
        cout << endl;
    }
    return 0;
}