/*
In a right triangle, the square of the length of one side is equal to the sum of the squares of the
lengths of the other two sides. Write a program that prompts the user to enter the lengths of
three sides of a triangle and then outputs a message indicating whether the triangle is a right
triangle.
*/

#include <iostream>

using namespace std;

int main()
{
    int x, y, z, x_squared, y_squared, z_squared;
    cout << "Enter sides of triangle" << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "z: ";
    cin >> z;

    x_squared = x * x;
    y_squared = y * y;
    z_squared = z * z;

    if (x_squared == y_squared + z_squared ||
        y_squared == x_squared + z_squared ||
        z_squared == x_squared + y_squared)

        cout << "Given sides represent a right triangle.";
    else
        cout << "Given sides don't represent a right triangle.";

    return 0;
}