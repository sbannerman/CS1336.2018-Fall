#include <iostream>
using namespace std;

int main()
{
	cout << "Steve Bannerman - CS 1336 - Assignment 5" << endl;
	cout << endl;

	double totalOfMeal;
	cout << "Please enter the total of your meal in dollars and cents (example: 35.64): ";
	cin >> totalOfMeal;

	double salesTaxRate;
	cout << "Please enter the sales tax rate for your location (example: 6.75): ";
	cin >> salesTaxRate;

	double serviceTipRate;
	cout << "Please enter the service tip rate that you want to leave (example: 20.00): ";
	cin >> serviceTipRate;
	cout << endl;

	double salesTax = totalOfMeal * (salesTaxRate / 100.0);
	cout << "The sales tax on your meal is: " << salesTax << endl;

	double serviceTip = totalOfMeal * (serviceTipRate / 100.0);
	cout << "The service tip on your meal is: " << serviceTip << endl;

	double overallTotal = totalOfMeal + salesTax + serviceTip;
	cout << "The overall total for your meal is: " << overallTotal << endl;

	return 0;
}