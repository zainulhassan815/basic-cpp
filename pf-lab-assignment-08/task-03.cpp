/*
Write a program that inputs a positive integer and passes it to a function that displays the
prime factors of this number. For example, prime factors of 24 are 2,3 and prime factors
of 35 are 5,7.
*/

#include <iostream>

using namespace std;

void display_prime_factors(int num)
{
    int factor = 2;
    cout << "Prime factors of " << num << " are: ";
    while (factor <= num)
    {
        if (num % factor == 0)
        {
            cout << factor << " ";
            num /= factor;
        }
        else
            factor++;
    }
    cout << endl;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    display_prime_factors(num);
    return 0;
}