#include <iostream>
#include <sstream>

using namespace std;

bool isCommentLine(string nextLine)
{
    return nextLine.front() == '#';
}

bool isEmptyLine(string nextLine)
{
    return nextLine == "";
}

int main()
{
    // Rather than reading from a file, add some input lines to a stringstream
    stringstream inputStream;
    inputStream << "This is a normal line" << endl;
    inputStream << "This is a normal line followed by an empty line" << endl;
    inputStream << endl;
    inputStream << "This is a normal line preceded by an empty line" << endl;
    inputStream << "#This is a comment line followed by an empty line" << endl;
    inputStream << endl;

    // Read lines from the input stream and categorize them
    string nextLine;
    int nextLineNumber = 1;
    getline(inputStream, nextLine);
    while (inputStream.good())
    {
        if (isEmptyLine(nextLine))
        {
            cout << "Read empty line " << nextLineNumber << endl;
        }
        else if (isCommentLine(nextLine))
        {
            cout << "Read comment line " << nextLineNumber << ": " << nextLine << endl;
        }
        else
        {
            cout << "Read normal line " << nextLineNumber << ": " << nextLine << endl;
        }

        getline(inputStream, nextLine);
        nextLineNumber++;
    }

    return 0;
}
