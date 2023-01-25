/*
Write a program that inputs number of week’s day and displays the name of the day. For
example, if user enters 1, it displays “Friday” and so on using switch/case structure. If you
have not studied switch/case structure so far, you can use if/else.
*/

#include <iostream>

using namespace std;

int main()
{
    int day;
    cout << "Enter week's day: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Friday";
        break;
    case 2:
        cout << "Saturday";
        break;
    case 3:
        cout << "Sunday";
        break;
    case 4:
        cout << "Monday";
        break;
    case 5:
        cout << "Tuesday";
        break;
    case 6:
        cout << "Wednesday";
        break;
    case 7:
        cout << "Thursday";
        break;
    default:
        cout << "Invalid input.";
    }

    cout << endl;
    return 0;
}