/*
Write a program that inputs marks of three subjects. If the average of marks is more than 80,
it displays two messages “you are above standard!” and “Admission granted!”.
*/

#include <iostream>

using namespace std;

int main()
{
    float english, urdu, maths, avg;
    cout << "Enter your marks" << endl;
    cout << "English: ";
    cin >> english;
    cout << "Urdu: ";
    cin >> urdu;
    cout << "Maths: ";
    cin >> maths;

    avg = (english + urdu + maths) / 3;
    if (avg > 80)
    {
        cout << "You are above standard!" << endl;
        cout << "Admission granted!" << endl;
    }

    return 0;
}