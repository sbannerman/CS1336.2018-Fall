#include <iostream>

using namespace std;

// Constants

const double CALORIES_BURNED_PER_MIN = 4.5;

const string ID_LINE = "Steve Bannerman - CS 1336 - Assignment 21";

const int MIN_INCREMENT = 2;
const int MIN_MINUTES = 10;
const int MAX_MINUTES = 20;

const string OUTPUT_INFIX = " minutes: ";
const string OUTPUT_PREFIX = "Calories burnt in ";

int main()
{
    cout << ID_LINE << endl;
    cout << endl;

    int minutesRunning = MIN_MINUTES;
    while (minutesRunning <= MAX_MINUTES)
    {
        cout << OUTPUT_PREFIX;
        cout << minutesRunning;
        cout << OUTPUT_INFIX;

        double caloriesBurned = CALORIES_BURNED_PER_MIN * minutesRunning;
        cout << caloriesBurned;
        cout << endl;

        minutesRunning += MIN_INCREMENT;
    }

    return 0;
}