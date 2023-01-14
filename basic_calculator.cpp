/*
Create a basic calculator.
*/

#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        int a, b;
        char ch;

        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
        cout << "operator: ";
        cin >> ch;

        switch (ch)
        {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            if (b != 0)
                cout << a / b;
            else
                cout << "Can't divide by zero.";
            break;
        default:
            cout << "Invalid operator.";
        }

        cout << endl;
    }
    return 0;
}