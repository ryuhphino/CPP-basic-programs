//Matthew Bowling
//Functions and Arrays


#include <iostream>
using namespace std;

const int ScoreNumbers = 5;

void getScore(int (&)[ScoreNumbers]);
void calcAverage(int(&) [ScoreNumbers]);
int findLowest(int(&) [ScoreNumbers]);

int main()
{
	int TestScores[ScoreNumbers];

	cout << "Please enter the test scores" << endl;
	getScore(TestScores);
	cout << "Will now drop the lowest score and find the average of the remaining four test scores" << endl;
	calcAverage(TestScores);

}



void getScore(int (&Score)[ScoreNumbers])
{
	for (int i = 0; i < ScoreNumbers; i++)
	{
		cin >> Score[i];
		while (Score[i] > 100 || Score[i] < 0)
		{
			cout << "Please enter a valid TestScore" << endl;
			cin >> Score[i];
		}
	}
}

void calcAverage(int(&Score)[ScoreNumbers])
{
	float Average = 0;
	int j = 0; // A counter to ensure only 1 score is left
	float LowestScore = findLowest(Score);
	cout << "The lowest score to be dropped is " << LowestScore << endl;

	for (int i = 0; i < ScoreNumbers; i++)
	{
		if (Score[i] == LowestScore && j == 0)
		{
			j++;
		}
		else if (j == 1 || Score[i] != LowestScore)
		{
			Average += Score[i];
		}
	}
	
	cout << "The average Test Scores is " << (Average / 4) << endl;
}

int findLowest(int(&Score)[ScoreNumbers])
{
	int LowestScore = 100; //Highest Possible value Obtainable

	for (int i = 0; i < ScoreNumbers; i++)
	{
		if (Score[i] < LowestScore)
		{
			LowestScore = Score[i];
		}
	}
	return LowestScore;
}