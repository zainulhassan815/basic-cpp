/*
Convert binary to decimal format in C++
*/

#include <iostream>
#include <cmath>

using namespace std;

int convert(long long binary)
{
    int decimal = 0, i = 0, remainder;
    while (binary != 0)
    {
        remainder = binary % 10;
        binary /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }
    return decimal;
}

int main()
{
    long long binary;
    cout << "Enter binary digit: ";
    cin >> binary;
    cout << binary << " in binary = " << convert(binary) << " in decimal." << endl;
    return 0;
}