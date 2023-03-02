/*
Generate the following output using nested for loops in C++. User should input number of
rows and number of columns and you will print the table starting from 1 up to rows.
*/

#include <iostream>

using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter no of rows: ";
    cin >> rows;
    cout << "Enter no of columns: ";
    cin >> cols;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cout << i * j << " ";
        }
        cout << endl;
    }

    return 0;
}