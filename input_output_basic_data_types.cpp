#include <iostream>

using namespace std;

int main()
{
    int anInteger;
    double aDouble;
    char character;
    string aString;

    cout << "Enter integer: ";
    cin >> anInteger;
    cout << "Enter double: ";
    cin >> aDouble;
    cout << "Enter character: ";
    cin >> character;
    cout << "Enter string: ";
    cin >> aString;

    cout << "Integer: " << anInteger << endl;
    cout << "Double: " << aDouble << endl;
    cout << "Charcter: " << character << endl;
    cout << "String: " << aString << endl;

    return 0;
}