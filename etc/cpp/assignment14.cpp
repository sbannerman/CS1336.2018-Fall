// Steve Bannerman
// CS 1336
// Assignment 14

#include <iostream>
#include <limits>
#include <string>

using namespace std;

// Constants

const char BEST_RATING = 'A';

const char END_OF_LINE_CHAR = '\n';

const string FAVORITE_SODA = "Coke";

const string ID_LINE = "Steve Bannerman - CS 1336 - Assignment 14";

const string OUTPUT_INFIX_NUMBER_OF_PEOPLE = " people ";

const string OUTPUT_PREFIX_EXPERT_TASTERS = "Each of these products was given a rating of ";
const string OUTPUT_PREFIX_NUMBER_OF_PEOPLE = "Out of ";
const string OUTPUT_PREFIX_OTHER_PRODUCTS = "The other products were rated no higher than a ";
const string OUTPUT_PREFIX_PREFERRED_SODA = "The preferred soda is ";
const string OUTPUT_PREFIX_PREFERRED_SNACK = "The preferred snack is ";

const string OUTPUT_SUFFIX_EXPERT_TASTERS = " from our expert tasters";
const string OUTPUT_SUFFIX_NUMBER_OF_PEOPLE = " chose these items!";

const string PROMPT_FAVORITE_SNACK = "Please enter the most favorite snack: ";
const string PROMPT_NUMBER_OF_PEOPLE_WHO_CHOSE_TOP_CHOICES = "Please enter the number of people who voted for the most favorite products: ";
const string PROMPT_NUMBER_OF_PEOPLE_WHO_VOTED = "Please enter the number of people voted: ";
const string PROMPT_SECOND_BEST_RATING = "What is 2nd best rating? ";

// Custom Functions

string getExpertTastersOutputLine()
{
	return OUTPUT_PREFIX_EXPERT_TASTERS + BEST_RATING + OUTPUT_SUFFIX_EXPERT_TASTERS;
}

string getFavoriteSnackOutputLine(string favoriteSnack)
{
	return OUTPUT_PREFIX_PREFERRED_SNACK + favoriteSnack;
}

string getFavoriteSodaOutputLine()
{
	return OUTPUT_PREFIX_PREFERRED_SODA + FAVORITE_SODA;
}

string getNumberOfPeopleOutputLine(int numberOfPeopleWhoVoted, int numberOfPeopleWhoChoseTopChoices)
{
	return OUTPUT_PREFIX_NUMBER_OF_PEOPLE +
		   to_string(numberOfPeopleWhoVoted) +
		   OUTPUT_INFIX_NUMBER_OF_PEOPLE +
		   to_string(numberOfPeopleWhoChoseTopChoices) +
		   OUTPUT_SUFFIX_NUMBER_OF_PEOPLE;
}

string getOtherProductsOutputLine(char secondBestRating)
{
	return OUTPUT_PREFIX_OTHER_PRODUCTS + to_string(secondBestRating);
}

int main()
{
	cout << ID_LINE << endl;
	cout << endl;

	int numberOfPeopleWhoVoted;
	cout << PROMPT_NUMBER_OF_PEOPLE_WHO_VOTED;
	cin >> numberOfPeopleWhoVoted;

	int numberOfPeopleWhoChoseTopChoices;
	cout << PROMPT_NUMBER_OF_PEOPLE_WHO_CHOSE_TOP_CHOICES;
	cin >> numberOfPeopleWhoChoseTopChoices;
	cin.ignore(INT_MAX, END_OF_LINE_CHAR);

	string favoriteSnack;
	cout << PROMPT_FAVORITE_SNACK;
	getline(cin, favoriteSnack);

	char secondBestRating;
	cout << PROMPT_SECOND_BEST_RATING;
	cin.get(secondBestRating);
	cin.ignore(INT_MAX, END_OF_LINE_CHAR);

	cout << getFavoriteSodaOutputLine() << endl;
	cout << getFavoriteSnackOutputLine(favoriteSnack) << endl;
	cout << getNumberOfPeopleOutputLine(numberOfPeopleWhoVoted, numberOfPeopleWhoChoseTopChoices) << endl;
	cout << getExpertTastersOutputLine() << endl;
	cout << getOtherProductsOutputLine(secondBestRating) << endl;

	return 0;
}