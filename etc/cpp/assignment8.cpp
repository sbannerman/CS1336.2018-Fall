#include <iostream>

using namespace std;

int main()
{
	cout << "Steve Bannerman - CS 1336 - Assignment 8" << endl;
	cout << endl;

	int totalSeconds = 4125;
	cout << totalSeconds << " seconds is equivalent to:" << endl;
	cout << endl;

	int hours = totalSeconds / 3600;
	cout << "Hours: " << hours << endl;
	cout << endl;

	int secondsLeftoverAfterHours = totalSeconds % 3600;
	int minutes = secondsLeftoverAfterHours / 60;
	cout << "Minutes: " << minutes << endl;
	cout << endl;

	int secondsLeftoverAfterMinutes = secondsLeftoverAfterHours % 60;
	cout << "Seconds: " << secondsLeftoverAfterMinutes << endl;

	return 0;
}