#include <iostream>

using namespace std;

int main()
{
    const int INCHES_PER_FOOT = 12;
    const float CENTIMETEr_PER_INCH = 2.54;

    int feet, inches, totalInches;
    float centimeters;

    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter inches: ";
    cin >> inches;

    totalInches = INCHES_PER_FOOT * feet + inches;
    centimeters = CENTIMETEr_PER_INCH * totalInches;

    cout << "Total Inches = " << totalInches << endl;
    cout << "Total Centimeters = " << centimeters << endl;
    return 0;
}
