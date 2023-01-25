/*
Write a program that inputs five integers. It finds and prints the largest and smallest integer.
*/

#include <iostream>

using namespace std;

int main()
{
    int smallest, largest;
    for (int i = 0; i < 5; ++i)
    {
        int x;
        cout << "Enter number: ";
        cin >> x;
        if (x > largest)
            largest = x;
        if (x < smallest)
            smallest = x;
    }

    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;
    return 0;
}