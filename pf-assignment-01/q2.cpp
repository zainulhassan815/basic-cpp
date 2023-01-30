/*
Compute the total and average of four numbers.
*/

#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, total, avg;
    cout << "Enter four numbers" << endl;
    cin >> a >> b >> c >> d;

    total = a + b + c + d;
    avg = total / 4;

    cout << "total: " << total << endl;
    cout << "average: " << avg << endl;

    return 0;
}