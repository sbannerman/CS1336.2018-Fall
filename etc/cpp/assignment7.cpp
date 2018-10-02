#include <iostream>
using namespace std;

int main()
{
    cout << "Steve Bannerman - CS 1336 - Assignment 7" << endl;
    cout << endl;

    double originalTotal;
    cout << "Please enter the total meal cost: $";
    cin >> originalTotal;
    cout << endl;

    double salesTaxRate;
    cout << "Please enter sales tax rate (in decimal): ";
    cin >> salesTaxRate;
    cout << endl;

    double serviceTipRate;
    cout << "Please enter tip rate (in decimal): ";
    cin >> serviceTipRate;
    cout << endl;

    cout << "Your total      : $" << originalTotal << endl;
    cout << endl;

    double salesTax = originalTotal * salesTaxRate;
    cout << "Your sales tax  : $" << salesTax << endl;
    cout << endl;

    double serviceTip = originalTotal * serviceTipRate;
    cout << "Your tip        : $" << serviceTip << endl;
    cout << endl;

    double grandTotal = originalTotal + salesTax + serviceTip;
    cout << "Your grand total: $" << grandTotal << endl;
    cout << endl;

    system("pause");

    return 0;
}
