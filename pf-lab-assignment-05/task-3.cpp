/*
Write a C++ program to print all prime numbers between 1 to n. For example, if user enters n = 10
then output of the program will be “2 3 5 7”.
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Prime numbers are: ";

    for (int i = 2; i <= n; i++)
    {
        bool isPrime = true;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << i << " ";
    }

    cout << endl;
    return 0;
}