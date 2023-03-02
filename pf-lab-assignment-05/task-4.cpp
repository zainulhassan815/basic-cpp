/*
Write a C++ program to find sum of all prime numbers between 1 to n. For example, if user enters
n = 10 then output of the program will be 2+3+5+7 = 17.
*/

#include <iostream>

using namespace std;

int main()
{
    int n, sum;
    cout << "Enter number: ";
    cin >> n;

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
            sum += i;
    }

    cout << "Sum of prime numbers is: " << sum << endl;
    return 0;
}