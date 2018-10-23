#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

// Constants

const string DIVIDER_INTEREST_EARNED = "---------Interest Earned---------";

const string ID_LINE = "Steve Bannerman - CS 1336 - Assignment 15";

const char OUTPUT_CHAR_DOLLARS = '$';
const char OUTPUT_CHAR_PERCENT = '%';
const string OUTPUT_LABEL_AMOUNT_IN_SAVINGS = "Amount in Savings:";
const string OUTPUT_LABEL_INTEREST = "Interest:";
const string OUTPUT_LABEL_INTEREST_RATE = "Interest Rate:";
const string OUTPUT_LABEL_PRINCIPAL = "Principal:";
const string OUTPUT_LABEL_TIMES_COMPOUNDED = "Times Compounded:";
const int OUTPUT_PRECISION_COLUMN_2 = 2;
const int OUTPUT_WIDTH_COLUMN_1 = 20;
const int OUTPUT_WIDTH_COLUMN_2 = 9;

const string PROMPT_COMPOUNDING_PERIODS = "Enter the number of times the interest is compounded: ";
const string PROMPT_INTEREST_RATE = "Enter the interest rate in the format .12 (for 12%): ";
const string PROMPT_PRINCIPAL_AMOUNT = "Enter the principal amount (do not use commas): ";

// Custom Functions

double calculateAmountInSavings(double principalAmount, double interestRate, int compoundingPeriods)
{
    return principalAmount * pow(1 + (interestRate / compoundingPeriods), compoundingPeriods);
}

double calculateInterest(double principalAmount, double amountInSavings)
{
    return amountInSavings - principalAmount;
}

void displayOutputAmountInSavings(double amountInSavings)
{
    cout << left << setw(OUTPUT_WIDTH_COLUMN_1 - 1);
    cout << OUTPUT_LABEL_AMOUNT_IN_SAVINGS;
    cout << OUTPUT_CHAR_DOLLARS;
    cout << right << setw(OUTPUT_WIDTH_COLUMN_2);
    cout << setprecision(OUTPUT_PRECISION_COLUMN_2) << fixed;
    cout << amountInSavings;
    cout << endl;
}

void displayOutputInterest(double interest)
{
    cout << left << setw(OUTPUT_WIDTH_COLUMN_1 - 1);
    cout << OUTPUT_LABEL_INTEREST;
    cout << OUTPUT_CHAR_DOLLARS;
    cout << right << setw(OUTPUT_WIDTH_COLUMN_2);
    cout << setprecision(OUTPUT_PRECISION_COLUMN_2) << fixed;
    cout << interest;
    cout << endl;
}

void displayOutputInterestRate(double interestRate)
{
    cout << left << setw(OUTPUT_WIDTH_COLUMN_1);
    cout << OUTPUT_LABEL_INTEREST_RATE;
    cout << right << setw(OUTPUT_WIDTH_COLUMN_2);
    cout << setprecision(OUTPUT_PRECISION_COLUMN_2) << fixed;
    cout << (100 * interestRate);
    cout << OUTPUT_CHAR_PERCENT;
    cout << endl;
}

void displayOutputPrincipal(double principalAmount)
{
    cout << left << setw(OUTPUT_WIDTH_COLUMN_1 - 1);
    cout << OUTPUT_LABEL_PRINCIPAL;
    cout << OUTPUT_CHAR_DOLLARS;
    cout << right << setw(OUTPUT_WIDTH_COLUMN_2);
    cout << setprecision(OUTPUT_PRECISION_COLUMN_2) << fixed;
    cout << principalAmount;
    cout << endl;
}

void displayOutputTimesCompounded(int compoundingPeriods)
{
    cout << left << setw(OUTPUT_WIDTH_COLUMN_1);
    cout << OUTPUT_LABEL_TIMES_COMPOUNDED;
    cout << right << setw(OUTPUT_WIDTH_COLUMN_2);
    cout << compoundingPeriods;
    cout << endl;
}

int main()
{
    cout << ID_LINE << endl;
    cout << endl;

    double principalAmount;
    cout << PROMPT_PRINCIPAL_AMOUNT;
    cin >> principalAmount;

    double interestRate;
    cout << PROMPT_INTEREST_RATE;
    cin >> interestRate;

    int compoundingPeriods;
    cout << PROMPT_COMPOUNDING_PERIODS;
    cin >> compoundingPeriods;

    cout << endl;
    cout << DIVIDER_INTEREST_EARNED << endl;
    cout << endl;

    displayOutputInterestRate(interestRate);
    displayOutputTimesCompounded(compoundingPeriods);
    displayOutputPrincipal(principalAmount);

    double amountInSavings = calculateAmountInSavings(principalAmount, interestRate, compoundingPeriods);
    displayOutputAmountInSavings(amountInSavings);

    double interest = calculateInterest(principalAmount, amountInSavings);
    displayOutputInterest(interest);

    return 0;
}