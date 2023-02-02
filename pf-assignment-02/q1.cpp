/*
Find the Area and Perimeter of a Rectangle.
*/

#include <iostream>

using namespace std;

int main()
{
    float l, w, area, perimeter;
    cout << "Enter side of rectangle" << endl;
    cout << "length: ";
    cin >> l;
    cout << "width: ";
    cin >> w;

    area = l * w;
    perimeter = 2 * (l + w);

    cout << "area = " << area << endl;
    cout << "perimeter = " << perimeter << endl;
    return 0;
}