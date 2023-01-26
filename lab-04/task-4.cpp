/*
Write a program that mimics a calculator. The program should take as input two integers and
the operation to be performed. It should then output the numbers, the operator, and the result.
You must provide support for at least 15 operators (+, -, /, *, &amp;&amp;, ||, &amp;, |, % etc.) For division,
if the denominator is zero, output an appropriate message. Some sample output: Input will be
3, 4 and operator = 1 (+), output will 3 + 4 = 7.
. Write this program using if/else
. Write this program using switch/case
*/

#include <iostream>

using namespace std;

int main()
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
    case '%':
        cout << a % b;
        break;
    default:
        cout << "Invalid operator.";
    }

    cout << endl;
    return 0;
}