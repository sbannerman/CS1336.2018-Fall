#include <iostream>

using namespace std;

const string HEADER_LINE = "Steve Bannerman - CS 1336 - Assignment 10";

const string PREFIX_FEDERAL_TAX = "Employee's federal tax: $";
const string PREFIX_GROSS_ANNUAL_PAY = "Employee's gross annual pay: $";
const string PREFIX_NET_ANNUAL_PAY = "Employee's net annual pay: $";

const string PROMPT_NUMBER_OF_PAY_PERIODS = "Enter number of pay periods: ";
const string PROMPT_PAY_AMOUNT_PER_PERIOD = "Enter employee's pay amount per period: ";
const string PROMPT_TAX_BRACKET_RATE = "Enter employee's tax bracket (in fraction, i.e. 0.25 for 25%): ";

int main()
{
    cout << HEADER_LINE << endl;
    cout << endl;

    double payAmountPerPeriod;
    cout << PROMPT_PAY_AMOUNT_PER_PERIOD;
    cin >> payAmountPerPeriod;

    int numberOfPayPeriods;
    cout << PROMPT_NUMBER_OF_PAY_PERIODS;
    cin >> numberOfPayPeriods;

    double taxBracketRate;
    cout << PROMPT_TAX_BRACKET_RATE;
    cin >> taxBracketRate;

    cout << endl;

    double grossAnnualPay = payAmountPerPeriod * numberOfPayPeriods;
    cout << PREFIX_GROSS_ANNUAL_PAY << grossAnnualPay << endl;

    double federalTax = grossAnnualPay * taxBracketRate;
    cout << PREFIX_FEDERAL_TAX << federalTax << endl;

    double netAnnualPay = grossAnnualPay - federalTax;
    cout << PREFIX_NET_ANNUAL_PAY << netAnnualPay << endl;

    return 0;
}