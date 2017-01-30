//Matthew Bowling
//Loops

#include <iostream>

using namespace std;

int main()
{
	const int TestNum = 5;
	float Tests[TestNum];
	float Average = 0;
	
	cout << "Please enter the Test Scores Received" << endl;

	for (int i = 0; i < TestNum; i++)
	{
		cin >> Tests[i];
		
		while (Tests[i] > 100 || Tests[i] < 0)
		{
			cout << "Please insert a correct test value" << endl;
			cin >> Tests[i];
		}

		{
			Average += Tests[i];
		}
	}

	std::cout.precision(3);
	cout << "The test Average is " << (Average / TestNum) << endl;
}