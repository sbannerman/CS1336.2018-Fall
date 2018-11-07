#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

// Constants

const string ID_LINE = "Steve Bannerman - CS 1336 - Assignment X";

// Custom Functions

int main()
{
    double circleRadius = 3.51;
    double triangleLength = 4.62;
    double squareLength = 5.73;

    double circleArea = 3.14 * circleRadius * circleRadius;
    cout << "Circle Area: " << fixed << setprecision(3) << circleArea << endl;

    double triangleArea = sqrt(3) / 4 * triangleLength * triangleLength;
    cout << "Triangle Area: " << fixed << setprecision(3) << triangleArea << endl;

    double squareArea = squareLength * squareLength;
    cout << "Square Area: " << fixed << setprecision(3) << squareArea << endl;

    double totalArea = circleArea + triangleArea + squareArea;
    cout << "Total Area: " << fixed << setprecision(3) << totalArea << endl;
    cout << "Average Area: " << fixed << setprecision(3) << (totalArea / 3) << endl;

    return 0;
}