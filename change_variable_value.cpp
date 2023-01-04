#include <iostream>

using namespace std;

int main()
{
    const int NUMBER = 12;
    int firstNum = 18, secondNum;
    cout << "Enter an integer: ";
    cin >> secondNum;
    cout << "FirstNumber: " << firstNum << endl;
    cout << "SecondNumber: " << secondNum << endl;
    firstNum = firstNum + NUMBER + 2 * secondNum;
    cout << "New value of FirstNumber = " << firstNum << endl;
    return 0;
}