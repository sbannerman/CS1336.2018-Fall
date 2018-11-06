#include <iomanip>
#include <iostream>

using namespace std;

// Constants

const string HEADER_LINE = "        Fast Freight Shipping Company - Shipping Charges Menu";

const int MENU_OPTION_1 = 1;
const int MENU_OPTION_2 = 2;
const int MENU_OPTION_3 = 3;
const int MENU_OPTION_4 = 4;
const int MENU_OPTION_5 = 5;

const string MENU_TEXT_1 = "1. 2 lb or less";
const string MENU_TEXT_2 = "2. Over 2 lb but no more than 6 lb";
const string MENU_TEXT_3 = "3. Over 6 lb but no more than 10 lb";
const string MENU_TEXT_4 = "4. Over 10 lb but no more than 20 lb";
const string MENU_TEXT_5 = "5. Over 20 lb";

const string OUTPUT_INVALID_CHOICE = "Invalid choice. Run the program again with a valid choice.";
const string OUTPUT_SHIPPING_COST_PREFIX = "Your charges are $";
const string OUTPUT_SHIPPING_COST_SUFFIX = ".";
const string OUTPUT_UNACCEPTED_CHOICE = "Sorry, we do not accept weight over 20 lb.";

const string PROMPT_SHIPPING_DISTANCE = "Enter distance in miles (whole number please): ";
const string PROMPT_WEIGHT_CHOICE = "Enter your choice regarding the weight of your package: ";

const double SHIPPING_RATE_1 = 1.10;
const double SHIPPING_RATE_2 = 2.20;
const double SHIPPING_RATE_3 = 3.70;
const double SHIPPING_RATE_4 = 4.80;

// Custom Functions

double calculateShippingCost(int shippingDistance, double shippingRate)
{
    int distanceFactor = shippingDistance / 500 + 1;
    return distanceFactor * shippingRate;
}

void displayShippingCost(double shippingCost)
{
    cout << OUTPUT_SHIPPING_COST_PREFIX;
    cout << fixed << setprecision(2) << shippingCost;
    cout << OUTPUT_SHIPPING_COST_SUFFIX;
    cout << endl;
}

int gatherShippingDistance()
{
    int shippingDistance;
    cout << PROMPT_SHIPPING_DISTANCE;
    cin >> shippingDistance;
    return shippingDistance;
}

void handleMenuChoice1()
{
    int shippingDistance = gatherShippingDistance();
    double shippingCost = calculateShippingCost(shippingDistance, SHIPPING_RATE_1);
    displayShippingCost(shippingCost);
}

void handleMenuChoice2()
{
    int shippingDistance = gatherShippingDistance();
    double shippingCost = calculateShippingCost(shippingDistance, SHIPPING_RATE_2);
    displayShippingCost(shippingCost);
}

void handleMenuChoice3()
{
    int shippingDistance = gatherShippingDistance();
    double shippingCost = calculateShippingCost(shippingDistance, SHIPPING_RATE_3);
    displayShippingCost(shippingCost);
}

void handleMenuChoice4()
{
    int shippingDistance = gatherShippingDistance();
    double shippingCost = calculateShippingCost(shippingDistance, SHIPPING_RATE_4);
    displayShippingCost(shippingCost);
}

void handleMenuChoice5()
{
    cout << OUTPUT_UNACCEPTED_CHOICE << endl;
}

void handleMenuChoiceInvalid()
{
    cout << OUTPUT_INVALID_CHOICE << endl;
}

int main()
{
    cout << HEADER_LINE << endl;
    cout << endl;

    cout << MENU_TEXT_1 << endl;
    cout << MENU_TEXT_2 << endl;
    cout << MENU_TEXT_3 << endl;
    cout << MENU_TEXT_4 << endl;
    cout << MENU_TEXT_5 << endl;
    cout << endl;

    int menuWeightChoice;
    cout << PROMPT_WEIGHT_CHOICE;
    cin >> menuWeightChoice;

    switch (menuWeightChoice)
    {
    case MENU_OPTION_1:
        handleMenuChoice1();
        break;
    case MENU_OPTION_2:
        handleMenuChoice2();
        break;
    case MENU_OPTION_3:
        handleMenuChoice3();
        break;
    case MENU_OPTION_4:
        handleMenuChoice4();
        break;
    case MENU_OPTION_5:
        handleMenuChoice5();
        break;
    default:
        handleMenuChoiceInvalid();
        break;
    }

    return 0;
}