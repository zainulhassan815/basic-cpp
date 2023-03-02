/*
Write C++ code power-close-to that takes as arguments two positive integers b and n, and returns
the smallest power of b that is greater than n. That is, it should return the smallest positive integer
e such that b^e > n.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int b, n, e;
    cout << "Enter two positive integers: ";
    cin >> b >> n;

    while (pow(b, e) <= n)
        e++;

    cout << "The smallest power of " << b
         << " greater than " << n << " is " << e << endl;

    return 0;
}