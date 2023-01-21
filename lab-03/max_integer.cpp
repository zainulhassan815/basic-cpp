/*
Prompt user to enter multiple integers, and calculate maximum integer.
*/

#include <iostream>

using namespace std;

int main()
{
    int max = -99999;
    while (true)
    {
        int num;
        cout << "Enter a number: ";
        cin >> num;

        if (num == -1)
            break;

        if (num > max)
            max = num;
    }

    cout << "Greatest number is: " << max << endl;
    return 0;
}