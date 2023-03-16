/*
Write a C++ program to update every array element by multiplication of next and previous
values of a given array of integers.
*/

#include <iostream>
using namespace std;

void updateArray(int arr[], int n)
{
    int temp = arr[0], next;
    arr[0] = arr[0] * arr[1];
    for (int i = 1; i < n - 1; i++)
    {
        next = arr[i + 1];
        arr[i] = temp * next;
        temp = arr[i];
    }
    arr[n - 1] = temp * arr[n - 1];
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    updateArray(arr, n);
    cout << "Updated array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}