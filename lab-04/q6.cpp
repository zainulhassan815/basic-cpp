/*
Write a program that inputs salary. If the salary is 20000 or more, it deducts 7% of salary. IF
the salary is 10000 or more but less than 20000, it deducts 1000 from salary. If salary is less
than 10000, it deducts nothing. It finally displays the net salary.
*/

#include <iostream>

using namespace std;

int main()
{
    int salary, deduction = 0, total;
    cout << "Enter salary: ";
    cin >> salary;

    if (salary >= 20000)
        deduction = salary * .07;
    else if (salary >= 10000)
        deduction = 1000;

    total = salary - deduction;
    cout << "Total Salary: " << total << endl;
    return 0;
}