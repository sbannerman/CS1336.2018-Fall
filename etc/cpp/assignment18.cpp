#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

// Constants

const string ID_LINE = "Steve Bannerman - CS 1336 - Assignment 18";

const string OUTPUT_PREFIX_COMPUTER_ENTRY = "I generated: ";
const string OUTPUT_PREFIX_ROCK_BREAKS_SCISSORS = "Rock breaks scissors. ";
const string OUTPUT_PREFIX_PAPER_COVERS_ROCK = "Paper covers rock. ";
const string OUTPUT_PREFIX_SCISSORS_CUT_PAPER = "Scissors cut paper. ";
const string OUTPUT_PREFIX_USER_ENTRY = "Your entry: ";

const string OUTPUT_SUFFIX_ROCK = " - rock";
const string OUTPUT_SUFFIX_PAPER = " - paper";
const string OUTPUT_SUFFIX_SCISSORS = " - scissors";

const string OUTPUT_VALUE_COMPUTER_WIN = "I win!";
const string OUTPUT_VALUE_INVALID = "Invalid entry. Please run the program again and enter a number between 1 and 3.";
const string OUTPUT_VALUE_TIE = "It's a tie!";
const string OUTPUT_VALUE_USER_WIN = "You win!";

const string PROMPT_ENTER_INTEGER = "Enter an integer between 1 and 3: ";

const int VALUE_ROCK = 1;
const int VALUE_PAPER = 2;
const int VALUE_SCISSORS = 3;

// Custom Functions

void displayComputerChoseRock()
{
    cout << OUTPUT_PREFIX_COMPUTER_ENTRY << VALUE_ROCK << OUTPUT_SUFFIX_ROCK << endl;
}

void displayComputerChosePaper()
{
    cout << OUTPUT_PREFIX_COMPUTER_ENTRY << VALUE_PAPER << OUTPUT_SUFFIX_PAPER << endl;
}

void displayComputerChoseScissors()
{
    cout << OUTPUT_PREFIX_COMPUTER_ENTRY << VALUE_SCISSORS << OUTPUT_SUFFIX_SCISSORS << endl;
}

void displayId()
{
    cout << ID_LINE << endl;
    cout << endl;
}

void displayResultComputerWon(string description)
{
    cout << description << OUTPUT_VALUE_COMPUTER_WIN << endl;
}

void displayResultInvalid()
{
    cout << OUTPUT_VALUE_INVALID << endl;
}

void displayResultTie()
{
    cout << OUTPUT_VALUE_TIE << endl;
}

void displayResultUserWon(string description)
{
    cout << description << OUTPUT_VALUE_USER_WIN << endl;
}

void displayUserChoseRock()
{
    cout << OUTPUT_PREFIX_USER_ENTRY << VALUE_ROCK << OUTPUT_SUFFIX_ROCK << endl;
}

void displayUserChosePaper()
{
    cout << OUTPUT_PREFIX_USER_ENTRY << VALUE_PAPER << OUTPUT_SUFFIX_PAPER << endl;
}

void displayUserChoseScissors()
{
    cout << OUTPUT_PREFIX_USER_ENTRY << VALUE_SCISSORS << OUTPUT_SUFFIX_SCISSORS << endl;
}

int gatherUserValue()
{
    int userValue;

    cout << PROMPT_ENTER_INTEGER;
    cin >> userValue;
    cout << endl;

    return userValue;
}

int generateComputerValue()
{
    // seed the random generator first
    srand(time(0));

    // generate a random number between 0 and 2
    int randomValue = rand() % 3;

    // return a random number between 1 and 3 (since 3 potential values)
    return randomValue + 1;
}

// this function needs to come after all of the functions it calls
// unless we declare prototypes for them before this
void handleUserRockValueAndComputerValue(int computerValue)
{
    displayUserChoseRock();
    if (computerValue == VALUE_ROCK)
    {
        displayComputerChoseRock();
        displayResultTie();
    }
    else if (computerValue == VALUE_PAPER)
    {
        displayComputerChosePaper();
        displayResultComputerWon(OUTPUT_PREFIX_PAPER_COVERS_ROCK);
    }
    else if (computerValue == VALUE_SCISSORS)
    {
        displayComputerChoseScissors();
        displayResultUserWon(OUTPUT_PREFIX_ROCK_BREAKS_SCISSORS);
    }
    else
    {
        cout << "Program error...user chose rock but invalid computerValue: " << computerValue << endl;
    }
}

// this function needs to come after all of the functions it calls
// unless we declare prototypes for them before this
void handleUserPaperValueAndComputerValue(int computerValue)
{
    displayUserChosePaper();
    if (computerValue == VALUE_ROCK)
    {
        displayComputerChoseRock();
        displayResultUserWon(OUTPUT_PREFIX_PAPER_COVERS_ROCK);
    }
    else if (computerValue == VALUE_PAPER)
    {
        displayComputerChosePaper();
        displayResultTie();
    }
    else if (computerValue == VALUE_SCISSORS)
    {
        displayComputerChoseScissors();
        displayResultComputerWon(OUTPUT_PREFIX_SCISSORS_CUT_PAPER);
    }
    else
    {
        cout << "Program error...user chose paper but invalid computerValue: " << computerValue << endl;
    }
}

// this function needs to come after all of the functions it calls
// unless we declare prototypes for them before this
void handleUserScissorsValueAndComputerValue(int computerValue)
{
    cout << OUTPUT_PREFIX_USER_ENTRY << VALUE_SCISSORS << OUTPUT_SUFFIX_SCISSORS << endl;
    if (computerValue == VALUE_ROCK)
    {
        displayComputerChoseRock();
        displayResultComputerWon(OUTPUT_PREFIX_ROCK_BREAKS_SCISSORS);
    }
    else if (computerValue == VALUE_PAPER)
    {
        displayComputerChosePaper();
        displayResultUserWon(OUTPUT_PREFIX_SCISSORS_CUT_PAPER);
    }
    else if (computerValue == VALUE_SCISSORS)
    {
        displayComputerChoseScissors();
        displayResultTie();
    }
    else
    {
        cout << "Program error...user chose scissors but invalid computerValue: " << computerValue << endl;
    }
}

// this function needs to come after all of the functions it calls
// unless we declare prototypes for them before this
void handleUserAndComputerValuePair(int userValue, int computerValue)
{
    if (userValue == VALUE_ROCK)
    {
        handleUserRockValueAndComputerValue(computerValue);
    }
    else if (userValue == VALUE_PAPER)
    {
        handleUserPaperValueAndComputerValue(computerValue);
    }
    else if (userValue == VALUE_SCISSORS)
    {
        handleUserScissorsValueAndComputerValue(computerValue);
    }
    else
    {
        displayResultInvalid();
    }
}

int main()
{
    displayId();

    int userValue = gatherUserValue();
    int computerValue = generateComputerValue();

    handleUserAndComputerValuePair(userValue, computerValue);

    return 0;
}