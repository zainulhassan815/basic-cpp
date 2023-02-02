/*
Check whether a character is uppercase or lowercase alphabet.
*/

#include <iostream>

using namespace std;

int main()
{
    char ch;
    int code;
    cout << "Enter a character: ";
    cin >> ch;
    code = (char)ch;

    if (code >= 65 && code <= 90)
        cout << ch << " is capital letter.";
    else if (code >= 97 && code <= 122)
        cout << ch << " is small letter.";

    cout << endl;
    return 0;
}