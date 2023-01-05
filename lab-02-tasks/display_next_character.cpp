/*
    Write a program which accepts a character and display its next character.
*/

#include <iostream>

using namespace std;

int main()
{
    char ch, next;
    cout << "Enter a character: ";
    cin >> ch;

    next = ++ch;
    cout << "Next character: " << next << endl;
    return 0;
}