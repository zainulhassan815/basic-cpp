/*
Write a C++ program to find all prime factors of a number. For example, if user enters 28 then
output of the program is “2, 7”.
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Prime factors of " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    cout << endl;
    return 0;
}