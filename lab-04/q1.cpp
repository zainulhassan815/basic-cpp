/*
Write a program that inputs marks and displays “Congratulations! You have passed.” If the
marks are 40 or more.
*/

#include <iostream>

using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 40)
        cout << "Congratulations! You have passed." << endl;

    return 0;
}