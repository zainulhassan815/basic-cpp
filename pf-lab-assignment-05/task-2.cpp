/*
Write a C++ program to check whether a number is prime number or not.
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    bool isPrime = true;
    cout << "Enter number: ";
    cin >> n;

    for (int i = 2; i < n / 2; ++i)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is a composite number." << endl;

    return 0;
}