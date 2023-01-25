/*
Write a program that allows the user to enter any character through the keyboard and
determines whether it is a capital letter, small case letter, a digit number or a special symbol.
*/

#include <iostream>

using namespace std;

int main()
{
    char ch;
    int code;
    cout << "Enter character: ";
    cin >> ch;
    code = (char)ch;

    // 65 <= code <= 90 => capital case
    // 97 <= code <= 122 => small case
    // 48 <= code <= 57 => digits
    if (code >= 65 && code <= 90)
        cout << ch << " is capital letter.";
    else if (code >= 97 && code <= 122)
        cout << ch << " is small letter.";
    else if (code >= 48 && code <= 57)
        cout << ch << " is a digit.";
    else
        cout << ch << " is a special symbol.";

    return 0;
}