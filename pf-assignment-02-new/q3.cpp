/*
Write a function that takes an array of numbers and returns an array with two elements:
1. The first element should be the sum of all even numbers in the array.
2. The second element should be the sum of all odd numbers in the array.
*/

#include <iostream>

using namespace std;

void findSum(int nums[], int count, int result[])
{
    int even_sum = 0, odd_sum = 0;
    for (int i = 0; i < count; i++)
    {
        int num = nums[i];
        if (num % 2 == 0)
            even_sum += num;
        else
            odd_sum += num;
    }
    result[0] = even_sum;
    result[1] = odd_sum;
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int result[2];
    findSum(nums, 9, result);
    cout << "Sum of even numbers: " << result[0] << endl;
    cout << "Sum of odd numbers: " << result[1] << endl;
    return 0;
}