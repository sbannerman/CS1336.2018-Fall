#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>

using namespace std;

// Constants

const string ID_LINE = "Steve Bannerman - CS 1336 - Assignment 25";

const string OUTPUT_PREFIX_AVG_CIRCLES = "Average circle area: ";
const string OUTPUT_PREFIX_AVG_SHAPES = "Average shape area: ";
const string OUTPUT_PREFIX_AVG_SQUARES = "Average square area: ";
const string OUTPUT_PREFIX_AVG_TRIANGLES = "Average triangle area: ";

const string OUTPUT_PREFIX_NUM_CIRCLES = "Number of circles: ";
const string OUTPUT_PREFIX_NUM_SQUARES = "Number of squares: ";
const string OUTPUT_PREFIX_NUM_TRIANGLES = "Number of triangles: ";

// Global variables

int numberOfCircles = 0;
int numberOfSquares = 0;
int numberOfTriangles = 0;

double areaOfCircles = 0.0;
double areaOfSquares = 0.0;
double areaOfTriangles = 0.0;

// Custom Functions

double calculateAverage(int numberOfShapes, double areaOfShapes)
{
    if (numberOfShapes > 0)
    {
        return areaOfShapes / numberOfShapes;
    }
    else
    {
        return 0.0;
    }
}

void displaySummary()
{
    cout << ID_LINE << endl;
    cout << endl;

    cout << OUTPUT_PREFIX_NUM_CIRCLES << numberOfCircles << endl;
    cout << OUTPUT_PREFIX_NUM_TRIANGLES << numberOfTriangles << endl;
    cout << OUTPUT_PREFIX_NUM_SQUARES << numberOfSquares << endl;
    cout << endl;

    cout << OUTPUT_PREFIX_AVG_CIRCLES;
    cout << fixed << setprecision(3) << calculateAverage(numberOfCircles, areaOfCircles);
    cout << endl;

    cout << OUTPUT_PREFIX_AVG_TRIANGLES;
    cout << fixed << setprecision(3) << calculateAverage(numberOfTriangles, areaOfTriangles);
    cout << endl;

    cout << OUTPUT_PREFIX_AVG_SQUARES;
    cout << fixed << setprecision(3) << calculateAverage(numberOfSquares, areaOfSquares);
    cout << endl;
    cout << endl;

    int numberOfShapes = numberOfCircles + numberOfTriangles + numberOfSquares;
    double areaOfShapes = areaOfCircles + areaOfTriangles + areaOfSquares;
    cout << OUTPUT_PREFIX_AVG_SHAPES;
    cout << fixed << setprecision(3) << calculateAverage(numberOfShapes, areaOfShapes);
    cout << endl;
}

bool isCommentLine(string inputLine)
{
    return inputLine.at(0) == '#';
}

ifstream openInputFileStream(string inputFilePath)
{
    ifstream inputFileStream;
    inputFileStream.open(inputFilePath);
    return inputFileStream;
}

ofstream openOutputFileStream(string outputFilePath)
{
    ofstream outputFileStream(outputFilePath);
    return outputFileStream;
}

void processInputLine(string inputLine, ofstream &outputFileStream)
{
    stringstream shapeMeasureStream;
    shapeMeasureStream << inputLine;

    int shapeId = 0;
    string shapeType = "";
    double shapeMeasure = 0.0;
    shapeMeasureStream >> shapeId >> shapeType >> shapeMeasure;

    double shapeArea = 0.0;
    if (shapeType == "circle")
    {
        shapeArea = 3.14 * shapeMeasure * shapeMeasure;
        areaOfCircles += shapeArea;
        numberOfCircles += 1;
    }
    else if (shapeType == "triangle")
    {
        shapeArea = sqrt(3) / 4 * shapeMeasure * shapeMeasure;
        areaOfTriangles += shapeArea;
        numberOfTriangles += 1;
    }
    else if (shapeType == "square")
    {
        shapeArea = shapeMeasure * shapeMeasure;
        areaOfSquares += shapeArea;
        numberOfSquares += 1;
    }
    else
    {
        // ignore unknown shape type
    }

    // Write output line to output file stream
    outputFileStream << shapeId;
    outputFileStream << " ";
    outputFileStream << shapeType;
    outputFileStream << " ";
    outputFileStream << fixed << setprecision(3) << shapeArea;
    outputFileStream << endl;
}

int main(int argc, char *argv[])
{
    // guard clause - invalid number of arguments
    if (argc != 3)
    {
        cout << "Usage: " << argv[0] << " <input file path> <output file path>" << endl;
        return 1;
    }

    string inputFilePath = argv[1];
    string outputFilePath = argv[2];

    // guard clause - input file problem
    ifstream inputFileStream = openInputFileStream(inputFilePath);
    if (!inputFileStream.good())
    {
        cout << "Unable to open input file stream: " << inputFilePath << endl;
        return 1;
    }

    // guard clause - output file problem
    ofstream outputFileStream = openOutputFileStream(outputFilePath);
    if (!outputFileStream.good())
    {
        cout << "Unable to open output file stream: " << outputFilePath << endl;
        inputFileStream.close();
        return 1;
    }

    string nextInputLine;
    getline(inputFileStream, nextInputLine);
    while (inputFileStream.good() && outputFileStream.good())
    {
        if (!isCommentLine(nextInputLine))
        {
            processInputLine(nextInputLine, outputFileStream);
        }
        getline(inputFileStream, nextInputLine);
    }

    outputFileStream.close();
    inputFileStream.close();

    displaySummary();

    return 0;
}