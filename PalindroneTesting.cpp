//Matthew Bowling
//Palindrone Testing

#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string palindrone;
	string copyreverse;
	int count = 0;

	cout << "Please enter a word to check if it is a palindrone" << endl;
	getline(cin, palindrone);


	//erase Gets rid of spaces while transform lowercases all letters
	palindrone.erase(remove_if(palindrone.begin(), palindrone.end(), isspace), palindrone.end());
	transform(palindrone.begin(), palindrone.end(), palindrone.begin(), ::tolower);
	copyreverse = palindrone;
	
	//make a reverse copy of the string
	reverse(copyreverse.begin(), copyreverse.end());

	for (unsigned i = 0; i < palindrone.length(); i++)
	{
		if (palindrone[i] == copyreverse[i])
		{ 
			count++;
		}
	}

	if (count == palindrone.length())
	{
		cout << "The word " << palindrone << " is a palindrone!" << endl;
	}
	else
	{
		cout << "The word " << palindrone << " is not a palindrone!" << endl;
	}
}
