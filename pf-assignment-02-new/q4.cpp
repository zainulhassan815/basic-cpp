/*
Create a function that, given a number, returns the corresponding value of that index in the Fibonacci
series.
*/

#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 10;
    cout << "Fibonacci number at index " << n << ": " << fibonacci(n) << endl;
    return 0;
}