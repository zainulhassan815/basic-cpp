/*
Write a program to compare two dates entered by user. Make a structure named Date to
store the elements day, month and year to store the dates. If the dates are equal, display
&quot;Dates are equal&quot; otherwise display &quot;Dates are not equal&quot;.
*/

#include <iostream>
using namespace std;

struct Date
{
    int day, month, year;
};

int main()
{
    Date date1, date2;

    // Input the first date
    cout << "Enter first date in format (dd mm yyyy): ";
    cin >> date1.day >> date1.month >> date1.year;

    // Input the second date
    cout << "Enter second date in format (dd mm yyyy): ";
    cin >> date2.day >> date2.month >> date2.year;

    // Compare the dates
    if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year)
    {
        cout << "Dates are equal" << endl;
    }
    else
    {
        cout << "Dates are not equal" << endl;
    }

    return 0;
}
