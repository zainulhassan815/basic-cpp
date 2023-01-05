/*
A milk carton can hold 3.78 liters of milk. Each morning, a dairy from ships cartons of milk to a local
grocery store. The cost of producing one liter of milk is $.038, and the profit of each carton of milk is
$0.27. Write a program that does the following:
    1. Prompts the user to enter the total amount of milk produced in the morning.
    2. Outputs the number of milk cartons needed to hold milk. (Round your answer to the nearest integer)
    3. Outputs the cost of producing milk.
    4. Outputs the profit for producing milk.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double total_milk;
    cout << "Enter amount of milk produced in the morning (in liters): ";
    cin >> total_milk;

    int num_cartons = round(total_milk / 3.78);
    double cost = total_milk * 0.038;
    double profit = num_cartons * 0.27;

    cout << "Number of milk cartons needed: " << num_cartons << endl;
    cout << "Cost of producing milk: " << cost << endl;
    cout << "Profit for producing milk: " << profit << endl;
    return 0;
}
