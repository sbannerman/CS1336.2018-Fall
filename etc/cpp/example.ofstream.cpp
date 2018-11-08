#include <fstream>
#include <iostream>

using namespace std;

// Custom Functions

void writeOutputLine(string outputLine, ofstream &outputFileStream)
{
    outputFileStream << outputLine;
    outputFileStream << endl;
}

int main(int argc, char *argv[])
{
    // guard clause - invalid number of arguments
    if (argc != 2)
    {
        cout << "Usage: " << argv[0] << " <output file path>" << endl;
        return 1;
    }

    string outputFilePath = argv[1];

    // guard clause - output file problem
    ofstream outputFileStream(outputFilePath);
    if (!outputFileStream.good())
    {
        cout << "Unable to open output file stream: " << outputFilePath << endl;
        return 1;
    }

    writeOutputLine("Test Line 1", outputFileStream);
    writeOutputLine("Test Line 2", outputFileStream);
    writeOutputLine("Test Line 3", outputFileStream);

    outputFileStream.close();

    return 0;
}