#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (num < 0)
        num = -num;

    cout << "Absolute Value = " << num << endl;
    return 0;
}