/*
Write a program inputs an integer and passes it to a function. The function should return
the number of digits in integer. For example, if the integer is 35 the function should
return 2, if it is 3572 the function should return 4.
*/

#include <iostream>

using namespace std;

int count_digits(int num)
{
    int count = 0;
    while (num != 0)
    {
        count++;
        num /= 10;
    }
    return count;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << "No of digits = " << count_digits(num) << endl;
    return 0;
}