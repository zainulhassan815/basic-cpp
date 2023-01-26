/*
Write a program to find Roots of Quadratic Equations.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, discriminant, x1, x2;

    cout << "Enter Coefficients" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    discriminant = (b * b) - 4 * a * c;
    x2 = (-b - sqrt(discriminant)) / (2 * a);
    x1 = (-b + sqrt(discriminant)) / (2 * a);

    if (discriminant > 0)
        cout << "Roots are real and different." << endl;
    else if (discriminant < 0)
        cout << "Roots are complex and different.";
    else
        cout << "Roots are real and equal." << endl;

    cout << x1 << " ," << x2 << endl;

    return 0;
}