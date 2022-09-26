// Program designed to calculate and print growth rates and estimated population
// Author: Daniel Bartolomei
// Date due: 9/25/22

#include <iostream>
using namespace std;

double GrowthRate(double);

double estimatedPop(double);

int main()
{
    int firstPop, numberYrs;
    double birthRate, deathRate, growth, finalPop;

    cout << "Enter the starting population: ";
    cin >> firstPop;
    if (firstPop < 2)
    {
        cout << "ERROR: Number must be greater than or equal to 2.";
        return 0;
    }

    cout << "Enter the birth rate: ";
    cin >> birthRate;
    if (birthRate < 0)
    {
        cout << "ERROR: Birth rate cannot be negative.";
        return 0;
    }

    cout << "Enter the death rate: ";
    cin >> deathRate;
    if (deathRate < 0)
    {
        cout << "ERROR: Death rate cannot be negative.";
        return 0;
    }

    cout << "Enter the number of years to project: ";
    cin >> numberYrs;
    if (numberYrs <= 0)
    {
        cout << "ERROR: Must provide a number of years (Number greater than 0). ";
    }

    growth = GrowthRate(growth);
    finalPop = estimatedPop(finalPop);

    cout << "The growth rate is: " << growth << endl;
    cout << "The estimated population over " << numberYrs << " years is: " << finalPop << endl;


    return 0;
}

double GrowthRate(double growth)
{
    double birthRate, deathRate;

    growth = (birthRate - deathRate);

    return growth;
}

double estimatedPop(double finalPop)
{
    double birthRate, deathRate;
    int firstPop;

    finalPop = firstPop + (birthRate * deathRate)/100 - (deathRate * firstPop)/100;

    return finalPop;
}
