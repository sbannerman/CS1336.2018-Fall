#include <fstream>
#include <iostream>

using namespace std;

// Constants

const string INPUT_FILE_PATH = "Sales.txt";

const string OUTPUT_PREFIX_AVG = "The average of elements: ";
const string OUTPUT_PREFIX_NUM = "The number of elements: ";
const string OUTPUT_PREFIX_SUM = "The sum of elements: ";

int main()
{
    // guard clause - file not opened
    ifstream inputFileStream(INPUT_FILE_PATH);
    if (!inputFileStream.good())
    {
        cout << "Unable to open input file stream on: " << INPUT_FILE_PATH << endl;
        return 1;
    }

    int numOfNumbers = 0;
    int sumOfNumbers = 0;
    while (inputFileStream.good())
    {
        int nextNumber;
        inputFileStream >> nextNumber;
        numOfNumbers += 1;
        sumOfNumbers += nextNumber;
    }

    inputFileStream.close();

    cout << OUTPUT_PREFIX_NUM << numOfNumbers << endl;
    cout << OUTPUT_PREFIX_SUM << sumOfNumbers << endl;

    double avgOfNumbers = sumOfNumbers * 1.0 / numOfNumbers;
    cout << OUTPUT_PREFIX_AVG << avgOfNumbers << endl;

    return 0;
}