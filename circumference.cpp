/*
    Q4- Write and run a program that will read radius r from the keyboard, and calculates the circumference using the formula: C = 2*pi*r. Finally display the circumference C. You need to declare a variable pi for evaluating it. (Try declaring it with const and observe the difference between the following int pi = 3.414; and const int pi = 3.414;)
*/

#include <iostream>

using namespace std;

int main()
{
    const double PI = 3.1417;
    double circumference, radius;
    cout << "Enter radius: ";
    cin >> radius;
    circumference = 2 * PI * radius;
    cout << "Circumference = " << circumference;
    return 0;
}