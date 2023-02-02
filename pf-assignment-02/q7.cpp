/*
Check Whether a character is Vowel or Consonant..
*/

#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "Enter character: ";
    cin >> ch;

    switch (ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        cout << ch << " is vowel.";
        break;
    default:
        cout << ch << " is consonant.";
    }

    return 0;
}