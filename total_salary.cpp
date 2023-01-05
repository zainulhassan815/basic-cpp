/*
    Write a program that inputs basic salary and calculates 15% medical allowance, 25% house rent and then displays the gross salary.
*/

#include <iostream>

using namespace std;

int main()
{
    int basicSalary, medicalAllowance, houseRent, grossSalary;
    cout << "Enter basic salary: ";
    cin >> basicSalary;

    medicalAllowance = basicSalary * .15;
    houseRent = basicSalary * .25;
    grossSalary = basicSalary + medicalAllowance + houseRent;
    cout << "Gross Salary = " << grossSalary;
    return 0;
}