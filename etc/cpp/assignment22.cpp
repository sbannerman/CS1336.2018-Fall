#include <iostream>

using namespace std;

// Constants

const string ID_LINE = "Steve Bannerman - CS 1336 - Assignment 22";

const int MIN_VALUE = 2;
const int MAX_VALUE = 100;

const int NULL_VALUE = 0;

const string OUTPUT_INFIX = ") is ";
const string OUTPUT_INVALID = "Invalid entry. Integer should be between 2 and 100.";
const string OUTPUT_PREFIX = "(1 + ... + ";

const string PROMPT_FOR_VALUE = "Enter an integer between 2 and 100, and I shall sum (1 + .. + number of your choice): ";

// Custom Functions

bool isUserValueInvalid(int userValue)
{
    return userValue < MIN_VALUE || userValue > MAX_VALUE;
}

int main()
{
    cout << ID_LINE << endl;
    cout << endl;

    // Gather user value
    int userValue = NULL_VALUE;
    while (isUserValueInvalid(userValue))
    {
        cout << PROMPT_FOR_VALUE;
        cin >> userValue;
        cout << endl;

        if (isUserValueInvalid(userValue))
        {
            cout << OUTPUT_INVALID << endl;
            cout << endl;
        }
    }

    // Use user value to calculate sum
    int sum = 0;
    int currentValue = 1;
    while (currentValue <= userValue)
    {
        sum += currentValue;
        currentValue += 1;
    }

    // Display calculated sum
    cout << OUTPUT_PREFIX << userValue << OUTPUT_INFIX << sum << endl;

    return 0;
}