//Matthew Bowling
//Reverse String

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string word;

	getline(cin, word);

	reverse(word.begin(), word.end());

	cout << "The reversed String is: " << word << endl;

	return 0;
}