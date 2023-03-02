/*
Write a C++ program to print all perfect numbers between 1 to n. For example, 6 is perfect
number since divisor of 6 are 1, 2 and 3. Sum of its divisor is 1 + 2+ 3 = 6 and 28 is also a perfect
number since 1+ 2 + 4 + 7 + 14= 28. Other perfect numbers: 496, 8128
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Perfect numbers between 1 to " << n
        << " are: ";
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
                sum += j;
        }

        if (sum == i)
            cout << i << " ";
    }

    cout << endl;
    return 0;
}