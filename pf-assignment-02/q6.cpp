/*
Calculate Sum of Natural Numbers.
*/

#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for (int i = 0; i <= 10; ++i)
        sum += i;
    cout << "Sum of 0-10 natural numbers = " << sum << endl;
    return 0;
}