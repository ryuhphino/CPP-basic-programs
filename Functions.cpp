//Matthew Bowling
//Functions

#include <iostream>

using namespace std;

float calculateRetail(float&, float&);

int main()
{
	float itemcost;
	float markup;

	cout << "Please enter the price of the item" << endl;
	cin >> itemcost;
	cout << "Now enter the percentage of markup" << endl;
	cin >> markup;

	while (markup > 1)
	{
		cout << "Please re-enter the markup cost to be a valid percentage amount" << endl;
		cin >> markup;
	}

	cout << "The markup cost is " << calculateRetail(itemcost, markup) << endl;

	return 0;
}

float calculateRetail(float &Cost, float &Mark)
{
	Cost = Cost + (Cost * Mark);

	return Cost;
}