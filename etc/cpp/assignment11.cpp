#include <iostream>

using namespace std;

const string HEADER_LINE = "Steve Bannerman - CS 1336 - Assignment 11";

const string PROMPT_TEMPERATURE_IN_FAHRENHEIT = "Enter temperature in Fahrenheit: ";

const string RESULT_IN_KELVIN_1 = " degree(s) Fahrenheit is ";
const string RESULT_IN_KELVIN_2 = " degree(s) Kelvin.";

int main()
{
    cout << HEADER_LINE << endl;
    cout << endl;

    double temperatureInFahrenheit;
    cout << PROMPT_TEMPERATURE_IN_FAHRENHEIT;
    cin >> temperatureInFahrenheit;
    cout << endl;

    double temperatureInKelvin = (5.0 / 9.0 * (temperatureInFahrenheit - 32.0)) + 273.15;
    cout << temperatureInFahrenheit << RESULT_IN_KELVIN_1 << temperatureInKelvin << RESULT_IN_KELVIN_2 << endl;

    return 0;
}