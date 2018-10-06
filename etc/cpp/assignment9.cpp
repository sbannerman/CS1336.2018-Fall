#include <iostream>

using namespace std;

const double TAX_RATE = 0.06;

int main()
{
	string name = "Steve Bannerman";
	string className = "CS 1336";
	string assignment = "Assignment 9";
	cout << name << " - " << className << " - " << assignment << endl;
	cout << endl;

	double priceOfItem1 = 12.95;
	cout << "Item 1:   $" << priceOfItem1 << endl;

	double priceOfItem2 = 24.95;
	cout << "Item 2:   $" << priceOfItem2 << endl;

	double priceOfItem3 = 6.95;
	cout << "Item 3:   $" << priceOfItem3 << endl;

	double priceOfItem4 = 14.95;
	cout << "Item 4:   $" << priceOfItem4 << endl;

	double priceOfItem5 = 3.95;
	cout << "Item 5:   $" << priceOfItem5 << endl;

	cout << "----------------" << endl;

	double subtotal = priceOfItem1 + priceOfItem2 + priceOfItem3 + priceOfItem4 + priceOfItem5;
	cout << "Subtotal: $" << subtotal << endl;

	double tax = subtotal * TAX_RATE;
	cout << "Tax:      $" << tax << endl;

	double total = subtotal + tax;
	cout << "Total:    $" << total << endl;

	return 0;
}