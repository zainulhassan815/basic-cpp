#include <iostream>

using namespace std;

int main()
{
    int saved_pin = 4019;
    int pin;

    cout << "Welcome to your Bank Account" << endl;
    cout << endl;

    cout << "Enter your 4-digit pin: ";
    cin >> pin;

    if (pin == saved_pin)
    {
        cout << "1. Cash Withdrawl" << endl
             << "2. Funds Transfer" << endl
             << "3. Fast Cash" << endl
             << "4. Balance Inquiry" << endl
             << "5. Bill Payment" << endl
             << "6. Change PIN" << endl;
    }
    else
    {
        cout << "Wrong PIN! Card Blocked." << endl;
    }

    return 0;
}