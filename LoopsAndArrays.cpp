//Matthew Bowling
//Loops and Arrays


#include <iostream>
#include <stdlib.h> 
using namespace std;

const int LotterySpots = 5;

int main()
{
	int WinningDigits[LotterySpots];
	int GuessingDigits[LotterySpots];
	int MatchedDigits = 0;

	cout << "Please enter your 5 guessed digits" << endl;
	for (int i = 0; i < LotterySpots; i++)
	{
		cin >> GuessingDigits[i];
		while (GuessingDigits[i] < 0 || GuessingDigits[i] > 9)
		{
			cout << "Please enter a valid digit" << endl;
			cin >> GuessingDigits[i];
		}
	}

	cout << "Will now randomly select the winning numbers and see what numbers you guessed match" << endl;

	for (int i = 0; i < LotterySpots; i++)
	{
		WinningDigits[i] = rand() % 9 + 1;
	}

	cout << "The winning digits are:" << endl;

	for (int i = 0; i < LotterySpots; i++)
	{
		cout << WinningDigits[i] << endl;
	}

	for (int i = 0; i < LotterySpots; i++)
	{
		if (GuessingDigits[i] == WinningDigits[i])
		{
			MatchedDigits++;
		}
	}

	cout << "You had " << MatchedDigits << " digits match up" << endl;

	return 0;
}