#include <iostream>
#include <sstream>

using namespace std;

// Custom Functions

void parseShapeLine(string shapeLine)
{
    stringstream shapeLineStream;
    shapeLineStream << shapeLine;

    int shapeId = 0;
    string shapeType = "";
    double shapeMeasure = 0.0;
    shapeLineStream >> shapeId >> shapeType >> shapeMeasure;

    cout << shapeLine;
    cout << " -> id=";
    cout << shapeId;
    cout << "; type=";
    cout << shapeType;
    cout << "; measure=";
    cout << shapeMeasure;
    cout << endl;
}

int main()
{
    cout << "Parsing some shape lines..." << endl;
    cout << "--" << endl;

    parseShapeLine("1 circle 3.51");
    parseShapeLine("2 triangle 4.62");
    parseShapeLine("3 square 5.73");

    cout << "--" << endl;
    cout << "Parsed some shape lines." << endl;

    return 0;
}
