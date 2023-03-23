/*
Write a C++ program to find the max of an integral data set. The program will ask the user to
input the number of data values in the set and each value. The program prints on screen a pointer
that points to the max value.
*/

#include <iostream>

using namespace std;

int main()
{
    int num[3];
    cout << "Enter three numbers: ";
    cin >> num[0] >> num[1] >> num[2];

    int index_of_max = 0;
    for (int i = 0; i < 3; i++)
    {
        if (num[i] > num[index_of_max])
            index_of_max = i;
    }

    cout << "Max number: " << num[index_of_max] << endl;
    cout << "Address of max: " << &num[index_of_max] << endl;
    return 0;
}