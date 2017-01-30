//Matthew Bowling
//Pointers

#include <iostream>
using namespace std;

void SortList(int *, int&);
void Average(int *, int&);


int main()
{
	int * ptr;
	int Scores;
	cout << "Please specify how many test scores were entered" << endl;
	cin >> Scores;

	ptr = new int [Scores];

	cout << "Now please specify each test score" << endl;

	for (int i = 0; i < Scores; i++)
	{
		cin >> ptr[i];
	}

	cout << "Will now sort the list of test scores" << endl;
	SortList(ptr, Scores);
	cout << "Will now calculate an average of test scores" << endl;
	Average(ptr, Scores);

}

void SortList(int *pointer, int &Score)
{
	int temp1, temp2;
	
	for (int j = 0; j < Score; j++)
	{
		for (int i = 0; i < Score-1; i++)
		{
			temp1 = pointer[i];
			temp2 = pointer[i + 1];

			if (temp1 < temp2)
			{
				pointer[i] = temp2;
				pointer[i + 1] = temp1;
			}
		}
	}

	cout << "The sorted list is now: " << endl;

	for (int i = 0; i < Score; i++)
	{
		cout << pointer[i] << endl;
	}
}

void Average(int *pointer, int &Score)
{
	int Total = 0;
	int Average = 0;

	for (int i = 0; i < Score; i++)
	{
		Total += pointer[i];
	}

	Average = Total / Score;
	cout << "The average Score is " << Average << endl;
}