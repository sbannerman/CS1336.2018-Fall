#include <iostream>
using namespace std;

const double PI = 3.14;

int main()
{
	cout << "Steve Bannerman - CS 1336 - Assignment 4" << endl;
	cout << endl;

	int radiusOfCircle;
	cout << "Please enter the radius of the circle: ";
	cin >> radiusOfCircle;
	cout << endl;

	cout << "radius = " << radiusOfCircle << endl;
	cout << endl;

	double areaOfCircle = PI * radiusOfCircle * radiusOfCircle;
	cout << "area = " << areaOfCircle << endl;

	return 0;
}