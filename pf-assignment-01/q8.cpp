/*
A program that takes your name, roll no, batch no, department name as an input and then displays it.
*/

#include <iostream>

using namespace std;

int main()
{
    string name, department;
    int rollno, batch;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter department: ";
    cin >> department;
    cout << "Roll No: ";
    cin >> rollno;
    cout << "Batch No: ";
    cin >> batch;

    cout << endl;
    cout << "Name: " << name << endl;
    cout << "Department: " << department << endl;
    cout << "Rollno: " << rollno << endl;
    cout << "Batchno: " << batch << endl;

    return 0;
}