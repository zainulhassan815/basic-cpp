/*
Write a structure to store the name, account number and balance of customers (more than
10) and store their information.
1 - Write a function to print the names of all the customers having balance less than $200.
2 - Write a function to add $100 in the balance of all the customers having more than
    $1000 in their balance and then print the incremented value of their balance.
*/

#include <iostream>
#include <string>
using namespace std;

struct Customer
{
    string name;
    int accountNumber;
    double balance;
};

Customer customers[10]; // assuming we have 10 customers

void printCustomersWithLowBalance()
{
    for (int i = 0; i < 10; i++)
    {
        if (customers[i].balance < 200)
        {
            cout << customers[i].name << endl;
        }
    }
}

void addHundredToCustomersWithHighBalance()
{
    for (int i = 0; i < 10; i++)
    {
        if (customers[i].balance > 1000)
        {
            customers[i].balance += 100;
            cout << customers[i].name << "'s new balance is $" << customers[i].balance << endl;
        }
    }
}

int main()
{
    cout << "Enter customer details in format: \"Name AccountNumber Balance\"";

    for (int i = 0; i < 10; i++)
    {
        cin >> customers[i].name >> customers[i].accountNumber >> customers[i].balance;
    }

    cout << endl;
    printCustomersWithLowBalance();
    addHundredToCustomersWithHighBalance();
    return 0;
}
