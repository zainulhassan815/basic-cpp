/*
Write a program to find the sum and product of all elements of an array.
*/

#include <iostream>

using namespace std;

int main()
{
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0, product = 1;

    for (int i = 0; i < 10; i++)
    {
        sum += nums[i];
        product *= nums[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;
    return 0;
}