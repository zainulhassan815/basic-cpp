/**
Write a program that prompts the user to enter a number and reverse it. Write a function
reverse() to reverse the number. For example, if the user enter 2764 term function should
reverse it so that it becomes 5672. The function should accept the number as an input
parameter and return the reverse number.
*/

#include <iostream>

using namespace std;

int reverse(int num)
{
    int reversed_num = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num /= 10;
    }
    return reversed_num;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << "Original number: " << num << endl;
    cout << "Reversed number: " << reverse(num) << endl;
    return 0;
}