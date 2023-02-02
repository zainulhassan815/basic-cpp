/*
Find factorial of given number.
*/

#include <iostream>

using namespace std;

int main()
{
    int num, factorial = 1;
    cout << "Enter number: ";
    cin >> num;

    while (num > 1)
    {
        factorial *= num;
        num--;
    }

    cout << factorial << endl;
    return 0;
}