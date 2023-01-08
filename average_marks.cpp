/*
Write a C++ program that takes input from five inputs from user: marks of Math, Science, Arabic, Pakistan Studies and English and finds average of the marks. (Math = 80 , Science =67, Arabic= 65, Studies= 88 , English = 56.)
*/

#include <iostream>

using namespace std;

int main()
{
    float math, science, arabic, pakStudies, english, average;
    cout << "Enter your marks" << endl;
    cout << "Math: ";
    cin >> math;
    cout << "Science: ";
    cin >> science;
    cout << "Arabic: ";
    cin >> arabic;
    cout << "Pak Studies: ";
    cin >> pakStudies;
    cout << "English: ";
    cin >> english;

    average = (math + science + arabic + pakStudies + english) / 5;
    cout << "Average: " << average << endl;
    return 0;
}