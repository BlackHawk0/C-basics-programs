

/* A program that converts gallons to cubic metres*/

#include <iostream>

using namespace std;

int main()
{
    double gallon;
    double cubic;
    const double value = 7.481;

    cout << "Enter the number of gallons : " << endl;
    cin >> gallon;
    cubic = gallon * value;

    cout << "The capacity in cubic metres is : " << cubic << ".\n";
    return 0;
}
