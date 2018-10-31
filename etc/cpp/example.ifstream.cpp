#include <ctime>
#include <fstream>
#include <iostream>

using namespace std;

// Constants

const string ID_LINE = "Steve Bannerman - CS 1336 - Assignment X";

// Custom Functions

int main(int argc, char *argv[])
{
    // guard clause - invalid number of arguments
    if (argc != 2)
    {
        cout << "Usage: " << argv[0] << " <input file path>" << endl;
        return 1;
    }

    string inputFilePath = argv[1];

    cout << "Creating input file stream..." << endl;
    ifstream inputFileStream;
    cout << "Created input file stream." << endl;

    cout << "Opening input file stream: " << inputFilePath << "..." << endl;
    inputFileStream.open(inputFilePath);
    cout << "Opened input file stream." << endl;
    cout << "--" << endl;

    string nextLine;
    int nextLineNumber = 1;
    getline(inputFileStream, nextLine);
    while (inputFileStream.good())
    {
        cout << "Read line " << nextLineNumber << ": " << nextLine << endl;
        getline(inputFileStream, nextLine);
        nextLineNumber++;
    }

    cout << "--" << endl;
    cout << "Closing input file stream: " << inputFilePath << "..." << endl;
    inputFileStream.close();
    cout << "Closed input file stream." << endl;

    return 0;
}