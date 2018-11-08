#include <iostream>

using namespace std;

// Constants

const string ID_LINE = "Steve Bannerman - CS 1336 - Assignment 23";

const int MIN_VALUE = 1;
const int MAX_VALUE = 100;

const int NULL_VALUE = 0;

const string OUTPUT_INVALID = "Invalid entry. Please enter a number between 1 and 100.";
const string OUTPUT_PREFIX_AVG = "The average of hours is: ";
const string OUTPUT_PREFIX_SUM = "The sum of hours is: ";

const string PROMPT_HOURS_PREFIX = "Enter the hours of employee ";
const string PROMPT_HOURS_SUFFIX = ": ";
const string PROMPT_NUMBER = "Enter the number of employees: ";

// Custom Functions

bool isUserValueInvalid(int userValue)
{
    return userValue < MIN_VALUE || userValue > MAX_VALUE;
}

int main()
{
    cout << ID_LINE << endl;
    cout << endl;

    // Gather number of employees from user
    int numberOfEmployees = NULL_VALUE;
    while (isUserValueInvalid(numberOfEmployees))
    {
        cout << PROMPT_NUMBER;
        cin >> numberOfEmployees;
        cout << endl;

        if (isUserValueInvalid(numberOfEmployees))
        {
            cout << OUTPUT_INVALID << endl;
        }
    }

    // Gather employee hours from user
    int sumOfHours = 0;
    for (int employeeNumber = 1; employeeNumber <= numberOfEmployees; employeeNumber++)
    {
        int employeeHours;
        cout << PROMPT_HOURS_PREFIX << employeeNumber << PROMPT_HOURS_SUFFIX;
        cin >> employeeHours;
        cout << endl;

        sumOfHours += employeeHours;
    }

    // Display sum and average of hours
    cout << OUTPUT_PREFIX_SUM << sumOfHours << endl;
    cout << endl;

    double avgOfHours = sumOfHours * 1.0 / numberOfEmployees;
    cout << OUTPUT_PREFIX_AVG << avgOfHours << endl;

    return 0;
}