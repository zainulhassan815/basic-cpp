/*
Prompt user to input number N and display digits on separate line.
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    while (num != 0)
    {
        int x = num % 10;
        cout << x << endl;
        num = num / 10;
        int y = num % 1;
        num = num - y;
    }

    return 0;
}