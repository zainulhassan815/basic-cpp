/*
Take an array of 10 elements. Split it into middle and store the elements in two different
*/

#include <iostream>

using namespace std;

int main()
{
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(nums) / sizeof(nums[0]);
    int mid = size / 2;
    int first_half[mid];
    int second_half[size - mid];

    cout << "Original Elements: ";
    for (int i = 0; i < size; i++)
        cout << nums[i] << " ";

    for (int i = 0; i < size; i++)
    {
        if (i < mid)
            first_half[i] = nums[i];
        else
            second_half[i - mid] = nums[i];
    }

    cout << endl
         << "First Half: ";
    for (int i = 0; i < mid; i++)
        cout << first_half[i] << " ";

    cout << endl
         << "Second Half: ";
    for (int i = 0; i < size - mid; i++)
        cout << second_half[i] << " ";

    cout << endl;
    return 0;
}
