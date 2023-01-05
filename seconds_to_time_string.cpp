/*
    Write a C++ program that prompts the user to input the elapsed time for an event in seconds. The
    program then outputs the elapsed time in hours, minutes and seconds. (For example, if elapsed time is
    9,630 seconds, then the output is 2:40:30.)
*/

#include <iostream>

using namespace std;

int main()
{
    int time, hours, mins, seconds;
    cout << "Enter time in seconds: ";
    cin >> time;

    hours = time / 3600;
    mins = (time % 3600) / 60;
    seconds = time % 60;

    cout << hours << ":" << mins << ":" << seconds << endl;
    return 0;
}
