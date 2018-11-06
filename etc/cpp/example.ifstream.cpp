#include <fstream>
#include <iostream>

using namespace std;

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

    // guard clause - file not opened
    cout << "Opening input file stream: " << inputFilePath << "..." << endl;
    inputFileStream.open(inputFilePath);
    if (!inputFileStream)
    {
        cout << "Unable to open input file stream: " << inputFilePath << endl;
        return 1;
    }

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