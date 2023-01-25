/*
Senior salesperson is paid Rs. 400 a week, and a junior salesperson is paid Rs. 275 a week.
Write a program that accepts as input a salesperson’s status in the character variable status. IF
status is ‘s’ or ‘S’ the senior person’s salary should be displayed; if status is ‘j’ or ‘J’, the junior
person’s salary should be displayed, otherwise display error message.
*/

#include <iostream>

using namespace std;

int main()
{
    char status;
    cout << "Status: ";
    cin >> status;

    if (status == 's' || status == 'S')
        cout << "Rs. 400" << endl;
    else if (status == 'j' || status == 'J')
        cout << "Rs. 275" << endl;
    else
        cout << "Invalid status" << endl;

    return 0;
}