/*
Write a C++ program that prints your education information on terminal in chronological order
using escape codes. It should be properly formatted as discussed in Chapter 2. Check for alignment
and spacing details.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const char separator = ' ';
    const int columnWidth = 30;
    cout << "Name: Zain Ul Hassan";
    cout << "\n";
    cout << left << setw(columnWidth) << setfill(separator)
         << "Degree";
    cout << left << setw(columnWidth) << setfill(separator)
         << "School/College Name";
    cout << left << setw(columnWidth) << setfill(separator)
         << "Marks";
    cout << "\n";
    cout << left << setw(columnWidth) << setfill(separator)
         << "Matric";
    cout << left << setw(columnWidth) << setfill(separator)
         << "Govt Boys High School";
    cout << left << setw(columnWidth) << setfill(separator)
         << "90%";
    cout << "\n";
    cout << left << setw(columnWidth) << setfill(separator)
         << "Intermediate";
    cout << left << setw(columnWidth) << setfill(separator)
         << "Graduate College Jhelum";
    cout << left << setw(columnWidth) << setfill(separator)
         << "73%";
    cout << "\n";
}