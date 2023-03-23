/*
Create a C++ program to read and write values through object using File Handling
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream output("task4.txt");
    output << "Task 04: This is a sample text file." << endl;
    output.close();

    string str;
    ifstream input("task4.txt");
    getline(input, str);
    cout << str << endl;
    return 0;
}
