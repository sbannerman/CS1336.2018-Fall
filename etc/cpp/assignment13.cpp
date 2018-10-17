#include <iomanip>
#include <iostream>

using namespace std;

const int COLUMN_WIDTH = 11;

const string DIVIDER_LINE = "--------------------------------------------";

const string HEADER_COL_1 = "Dimension";
const string HEADER_COL_2 = "Yards";
const string HEADER_COL_3 = "Feet";
const string HEADER_COL_4 = "Tot.Feet";

const string HEADER_LINE = "Steve Bannerman - CS 1336 - Assignment 13";

const string HEADER_ROW_1 = "Length";
const string HEADER_ROW_2 = "Width";

const string PROMPT_LENGTH = "Enter the length of the football field in yards and feet: ";
const string PROMPT_WIDTH = "Enter the width of the football field in yards and feet: ";

const string RESULT_PREFIX = "Area of the football field = ";
const string RESULT_SUFFIX = " square feet.";

int main()
{
    cout << HEADER_LINE << endl;
    cout << endl;

    int lengthYards, lengthFeet;
    cout << PROMPT_LENGTH;
    cin >> lengthYards >> lengthFeet;

    int widthYards, widthFeet;
    cout << PROMPT_WIDTH;
    cin >> widthYards >> widthFeet;

    cout << endl;

    cout << left << setw(COLUMN_WIDTH) << HEADER_COL_1;
    cout << right << setw(COLUMN_WIDTH) << HEADER_COL_2;
    cout << setw(COLUMN_WIDTH) << HEADER_COL_3;
    cout << setw(COLUMN_WIDTH) << HEADER_COL_4;
    cout << endl;

    cout << DIVIDER_LINE << endl;

    int lengthTotal = (lengthYards * 3) + lengthFeet;
    cout << left << setw(COLUMN_WIDTH) << HEADER_ROW_1;
    cout << right << setw(COLUMN_WIDTH) << lengthYards;
    cout << setw(COLUMN_WIDTH) << lengthFeet;
    cout << setw(COLUMN_WIDTH) << lengthTotal;
    cout << endl;

    int widthTotal = (widthYards * 3) + widthFeet;
    cout << left << setw(COLUMN_WIDTH) << HEADER_ROW_2;
    cout << right << setw(COLUMN_WIDTH) << widthYards;
    cout << setw(COLUMN_WIDTH) << widthFeet;
    cout << setw(COLUMN_WIDTH) << widthTotal;
    cout << endl;

    cout << DIVIDER_LINE << endl;

    int areaOfField = lengthTotal * widthTotal;
    cout << RESULT_PREFIX << areaOfField << RESULT_SUFFIX << endl;

    return 0;
}