//Matthew Bowling
//Conditional Statements

#include <iostream>

using namespace std;

int main()
{
	float time;
	float conversion;

	cout << "Please enter the time in seconds" << endl;
	cin >> time;

	if (time >= 86400)
	{
		conversion = time / 60;
		conversion = conversion / 60;
		conversion = conversion / 60;
		cout << "You entered " << time << " seconds, which is " << conversion << " days" << endl;

	}
	else if (86400 > time && time >= 3600)
	{
		conversion = time / 60;
		conversion = conversion / 60;
		cout << "You entered " << time << " seconds, which is " << conversion << " hours" << endl;
	}
	else if (3600 > time && time >= 60)
	{
		conversion = time / 60;
		cout << "You entered " << time << " seconds, which is " << conversion << " minutes" << endl;
	}
	else
	{
		cout << "You entered " << time << " seconds" << endl;
	}
}