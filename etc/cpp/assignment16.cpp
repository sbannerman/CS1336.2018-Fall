#include <iostream>

using namespace std;

// Constants

const string ID_LINE = "Steve Bannerman - CS 1336 - Assignment 16";

const string OUTPUT_PREFIX_MAX = "Maximum of a and b is ";
const string OUTPUT_PREFIX_MIN = "Minimum of a and b is ";

const string PROMPT_A = "Enter an integer a (positive or negative): ";
const string PROMPT_B = "Enter an integer b (positive or negative): ";

int main()
{
    cout << ID_LINE << endl;
    cout << endl;

    int a;
    cout << PROMPT_A;
    cin >> a;
    cout << endl;

    int b;
    cout << PROMPT_B;
    cin >> b;
    cout << endl;

    if (a > b)
    {
        cout << OUTPUT_PREFIX_MAX << a << endl;
        cout << endl;

        cout << OUTPUT_PREFIX_MIN << b << endl;
        cout << endl;
    }
    else
    {
        cout << OUTPUT_PREFIX_MAX << b << endl;
        cout << endl;

        cout << OUTPUT_PREFIX_MIN << a << endl;
        cout << endl;
    }

    return 0;
}