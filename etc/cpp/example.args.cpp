#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    // guard clause - invalid number of arguments
    if (argc != 3)
    {
        cout << "Usage: " << argv[0] << " <input file path> <output file path>" << endl;
        return 1;
    }

    string programPath = argv[0];
    string inputFilePath = argv[1];
    string outputFilePath = argv[2];

    cout << "Program path: " << programPath << endl;
    cout << "Input file path: " << inputFilePath << endl;
    cout << "Output file path: " << outputFilePath << endl;

    return 0;
}
