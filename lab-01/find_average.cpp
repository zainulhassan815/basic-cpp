/*
Find the average of four test scores.
*/

#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, avg;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    cout << "C: ";
    cin >> c;
    cout << "D: ";
    cin >> d;

    avg = (a + b + c + d) / 4;
    cout << "Average: " << avg << endl;
    return 0;
}