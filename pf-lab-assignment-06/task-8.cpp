/*
Write a C++ program to check whether a number is strong number or not. Strong number is
a special number whose sum of factorial of digits is equal to the original number.
For example: 145 is strong number. Since, 1! + 4! + 5! = 145
*/

#include <iostream>

using namespace std;

int factorial(int num)
{
    int factorial = 1;
    while (num >= 1)
    {
        factorial *= num;
        --num;
    }
    return factorial;
}

int main()
{
    int num, temp, sum = 0;
    cout << "Enter number: ";
    cin >> num;
    temp = num;

    while (temp > 0)
    {
        int digit = temp % 10;
        sum += factorial(digit);
        temp = temp / 10;
    }

    if (sum == num)
        cout << num << " is a strong number." << endl;
    else
        cout << num << " is not a strong number." << endl;

    return 0;
}