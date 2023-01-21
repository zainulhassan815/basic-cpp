/*
Take a number from user and find it's factorial.
*/

#include <iostream>

using namespace std;

int main()
{
    // Factorial example
    // 4! = 4 x 3 x 2 x 1 =

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