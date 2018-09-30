// Steve Bannerman
// CS 1336
// Assignment 6

#include <iostream>
#include <string>

using namespace std;

// Constants
const bool BOOL_VALUE_TRUE = true;
const string HEADER_LINE = "Steve Bannerman - CS 1336 - Assignment 6";
const int NUMBER_OF_PEOPLE_TOP_CHOICE = 148;
const int NUMBER_OF_PEOPLE_TOTAL = 250;
const string PREFERRED_SUPERBOWL_DRINK = "Gatorade";
const string PREFERRED_SUPERBOWL_SNACK = "Nachos";
const char PRODUCT_RATING_BOTTOM = 'B';
const char PRODUCT_RATING_TOP = 'A';

int main()
{
    cout << HEADER_LINE << endl;
    cout << endl;

    cout << "The preferred drink of Super Bowl is " << PREFERRED_SUPERBOWL_DRINK << endl;
    cout << "The preferred snack of Super Bowl is " << PREFERRED_SUPERBOWL_SNACK << endl;
    cout << "Out of " << NUMBER_OF_PEOPLE_TOTAL << " people, " << NUMBER_OF_PEOPLE_TOP_CHOICE << " chose these items!" << endl;
    cout << "Each of these products was given a rating of " << PRODUCT_RATING_TOP << " from our expert tasters" << endl;
    cout << "The other products were rated no higher than a " << PRODUCT_RATING_BOTTOM << endl;
    cout << "The truth value of the statements above is " << BOOL_VALUE_TRUE << endl;

    return 0;
}
