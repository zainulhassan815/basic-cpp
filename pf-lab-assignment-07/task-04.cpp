/*
Find largest and smallest elements of an array.
*/

#include <iostream>

using namespace std;

int main()
{
    int nums[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int smallest = 99999, largest = -99999;
    int size = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < size; i++)
    {
        int num = nums[i];
        if (num < smallest)
            smallest = num;
        if (num > largest)
            largest = num;
    }

    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;
    return 0;
}