/*
The population of a town A is less than the population of town B. However, the population of town
A is growing faster than the population of town B. Write a program that prompts the user to enter
the population and growth rate of each town. The program outputs after how many years the
population of town A will be greater than or equal to the population of town B and the populations of both the towns at that time. (A sample input is: Population of town A = 5000, growth rate of
town A = 4%, population of town B = 8000, and growth rate of town B = 2%.)
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int population_a, population_b, years = 0;
    double growth_rate_a, growth_rate_b;

    cout << "Population of town A: ";
    cin >> population_a;
    cout << "Growth rate of town A: ";
    cin >> growth_rate_a;
    cout << "Population of town B: ";
    cin >> population_b;
    cout << "Growth rate of town B: ";
    cin >> growth_rate_b;

    growth_rate_a /= 100;
    growth_rate_b /= 100;

    while (population_a < population_b)
    {
        population_a *= (1 + growth_rate_a);
        population_b *= (1 + growth_rate_b);
        years++;
    }

    cout << "After " << years << " years, the population of town A will be greater than or equal to the population of town B." << endl;
    cout << "Population of town A: " << round(population_a) << endl;
    cout << "Population of town B: " << round(population_b) << endl;

    return 0;
}