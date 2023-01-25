/*
Write a program that inputs basic salary and job grade and calculates total salary according to
grade. Add 50% of the salary as bonus if the grade is greater than 15 and 25% bonus if the
grade is 15 or less and then displays the total salary.
*/

#include <iostream>

using namespace std;

int main()
{
    int salary, grade, bonus, total;
    cout << "Enter basic salary: ";
    cin >> salary;
    cout << "Enter job grade: ";
    cin >> grade;

    if (grade > 15)
        bonus = salary * .5;
    else
        bonus = salary * .25;

    total = salary + bonus;
    cout << "Bonus: " << bonus << endl;
    cout << "Total Salary: " << total << endl;
    return 0;
}