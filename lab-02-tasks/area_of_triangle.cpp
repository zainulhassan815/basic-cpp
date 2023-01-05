/*
    Write a program to find out the area of triangle when three sides a, b and c of the triangle are given.
    Use appropriate statements to input the values of a, b and c from the keyboard. Formula for the area of
    triangle is area = (s(s-a)(s-b)(s-c)) 1/2 where s=(a+b+c)/2
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, s, area;
    cout << "Enter sides of triangle" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Area = " << area << endl;

    return 0;
}