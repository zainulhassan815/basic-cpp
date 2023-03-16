/*
Write a C++ program to find the element that appears once in an array of integers.
*/

#include <iostream>
using namespace std;

int findSingle(int arr[], int n) {
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = res ^ arr[i];
    return res;
}

int main() {
    int arr[] = { 2, 3, 5, 4, 5, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Unique element is " << findSingle(arr, n);
    return 0;
}