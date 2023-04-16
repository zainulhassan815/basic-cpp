/*
Write a structure to store the roll no., name, age (between 11 to 14) and address of
students (more than 10). Store the information of the students.
1 - Write a function to print the names of all the students having age 14.
2 - Write another function to print the names of all the students having even RollNo.
3 - Write another function to display the details of the student whose roll no is given (i.e.
    roll no. entered by the user)
*/

#include <iostream>
#include <string>

using namespace std;

struct Student {
    int roll_no;
    string name;
    int age;
    string address;
};

int main() {
    const int num_students = 10; // We'll store information for 10 students
    Student students[num_students];

    // Input the information for each student
    for (int i = 0; i < num_students; i++) {
        cout << "Enter information for student #" << i + 1 << ":" << endl;
        cout << "Roll No.: ";
        cin >> students[i].roll_no;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Age (between 11 and 14): ";
        cin >> students[i].age;
        cout << "Address: ";
        cin >> students[i].address;
    }

    // 1. Print the names of all students having age 14
    cout << "Students with age 14: " << endl;
    for (int i = 0; i < num_students; i++) {
        if (students[i].age == 14) {
            cout << students[i].name << endl;
        }
    }

    // 2. Print the names of all students with even RollNo
    cout << "Students with even RollNo: " << endl;
    for (int i = 0; i < num_students; i++) {
        if (students[i].roll_no % 2 == 0) {
            cout << students[i].name << endl;
        }
    }

    // 3. Display the details of a student with a given RollNo
    int roll_no_to_find;
    cout << "Enter a RollNo to find a student: ";
    cin >> roll_no_to_find;

    bool found_student = false;
    for (int i = 0; i < num_students; i++) {
        if (students[i].roll_no == roll_no_to_find) {
            cout << "Details of student with RollNo " << roll_no_to_find << ":" << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Address: " << students[i].address << endl;
            found_student = true;
            break;
        }
    }

    if (!found_student) {
        cout << "Student with RollNo " << roll_no_to_find << " not found." << endl;
    }

    return 0;
}
