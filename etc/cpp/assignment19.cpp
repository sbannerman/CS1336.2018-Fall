#include <iostream>

using namespace std;

// Constants

const string ID_LINE = "Steve Bannerman - CS 1336 - Assignment 19";

const string OUTPUT_SUFFIX_BOTH = " is divisible by both 4 and 5.";
const string OUTPUT_SUFFIX_EITHER = " is divisible by either 4 or 5, but not both.";
const string OUTPUT_SUFFIX_NEITHER = " is divisible by neither 4 nor 5.";

const string PROMPT = "Enter an integer: ";

// Custom Functions

bool isEvenlyDivisibleBy(int inputValue, int divisor)
{
    return inputValue % divisor == 0;
}

bool isEvenlyDivisibleByFour(int inputValue)
{
    return isEvenlyDivisibleBy(inputValue, 4);
}

bool isEvenlyDivisibleByFive(int inputValue)
{
    return isEvenlyDivisibleBy(inputValue, 5);
}

int main()
{
    cout << ID_LINE << endl;
    cout << endl;

    int inputValue;
    cout << PROMPT;
    cin >> inputValue;
    cout << endl;

    if (isEvenlyDivisibleByFour(inputValue) && isEvenlyDivisibleByFive(inputValue))
    {
        cout << inputValue << OUTPUT_SUFFIX_BOTH << endl;
    }
    else if (isEvenlyDivisibleByFour(inputValue) || isEvenlyDivisibleByFive(inputValue))
    {
        cout << inputValue << OUTPUT_SUFFIX_EITHER << endl;
    }
    else
    {
        cout << inputValue << OUTPUT_SUFFIX_NEITHER << endl;
    }

    return 0;
}