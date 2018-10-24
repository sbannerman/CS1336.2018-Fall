#include <iomanip>
#include <iostream>

using namespace std;

// Constants

const string ID_LINE = "Steve Bannerman - CS 1336 - Assignment 17";

const string OUTPUT_INVALID_PREFIX = "Invalid weight. You should enter a mass greater than ";
const string OUTPUT_INVALID_SUFFIX = ".";
const string OUTPUT_VALID_GOOD = "It is of good weight.";
const string OUTPUT_VALID_HEAVY = "It is too heavy!";
const string OUTPUT_VALID_LIGHT = "It is too light!";
const string OUTPUT_WEIGHT_PREFIX = "The weight of the object is ";
const string OUTPUT_WEIGHT_SUFFIX = " newtons.";

const string PROMPT_ENTER_MASS = "Enter the object's mass in kilograms: ";

const int WEIGHT_HEAVY_N = 1000;
const int WEIGHT_LIGHT_N = 10;
const int WEIGHT_NULL_N = 0;
const double WEIGHT_PER_KG = 9.8;

int main()
{
    // Output my ID
    cout << ID_LINE << endl;
    cout << endl;

    // Gather the object's mass from the user
    double objectMassKg;
    cout << PROMPT_ENTER_MASS;
    cin >> objectMassKg;
    cout << endl;

    // Calculate the object's weight
    double objectWeightN = objectMassKg * WEIGHT_PER_KG;
    cout << OUTPUT_WEIGHT_PREFIX;
    cout << setprecision(2);
    cout << fixed;
    cout << objectWeightN;
    cout << OUTPUT_WEIGHT_SUFFIX << endl;
    cout << endl;

    // Output the appropriate message (based on the object's w)
    if (objectWeightN > WEIGHT_HEAVY_N)
    {
        cout << OUTPUT_VALID_HEAVY << endl;
    }
    else if (objectWeightN > WEIGHT_LIGHT_N)
    {
        cout << OUTPUT_VALID_GOOD << endl;
    }
    else if (objectWeightN > WEIGHT_NULL_N)
    {
        cout << OUTPUT_VALID_LIGHT << endl;
    }
    else
    {
        cout << OUTPUT_INVALID_PREFIX << WEIGHT_NULL_N << OUTPUT_INVALID_SUFFIX << endl;
    }

    return 0;
}