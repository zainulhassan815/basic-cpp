#include <iostream>

using namespace std;

int main()
{
    string firstName, lastName;
    int age;
    float weight;

    cout << "Enter details below" << endl;
    cout << "first name: ";
    cin >> firstName;
    cout << "last name: ";
    cin >> lastName;
    cout << "age: ";
    cin >> age;
    cout << "weight: ";
    cin >> weight;

    cout << firstName << " " << lastName << " is " << age << " years old and has weight of " << weight << "." << endl;
    return 0;
}