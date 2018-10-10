#include <cmath>
#include <iostream>

using namespace std;

const string HEADER_LINE = "Steve Bannerman - CS 1336 - Assignment 12";

const string PROMPT_ENTER_INTEGER_A = "Enter an integer a (positive or negative): ";
const string PROMPT_ENTER_INTEGER_B = "Enter an integer b (positive or negative): ";

int main()
{
    cout << HEADER_LINE << endl;
    cout << endl;

    int integerA;
    cout << PROMPT_ENTER_INTEGER_A;
    cin >> integerA;
    cout << endl;

    int integerB;
    cout << PROMPT_ENTER_INTEGER_B;
    cin >> integerB;
    cout << endl;

    int max = (integerA + integerB + abs(integerA - integerB)) / 2;
    cout << "Maximum of " << integerA << " and " << integerB << " is " << max << endl;
    cout << endl;

    int min = (integerA + integerB - abs(integerA - integerB)) / 2;
    cout << "Minimum of " << integerA << " and " << integerB << " is " << min << endl;
    cout << endl;

    return 0;
}