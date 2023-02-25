/*
Write a C program to find Highest Common Factor (HCF/ GCD) of two numbers. For example, if
user enters 4 and 64 then greatest common divisor (GCD) for the given values will be 4.
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, hcf;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    cout << "The HCF/GCD of " << num1 << " and " << num2 << " is " << hcf << endl;
    return 0;
}