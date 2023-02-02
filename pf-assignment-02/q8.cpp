/*
Check a character is digit or alphabet.
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

    if ((code >= 65 && code <= 90) || (code >= 97 && code <= 122))
        cout << ch << " is an alphabet." << endl;
    else if (code >= 48 && code <= 57)
        cout << ch << " is a digit." << endl;

    return 0;
}