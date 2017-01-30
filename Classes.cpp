//Matthew Bowling
//Class

#include <iostream>
using namespace std;

class Population {
private:
	int birthRate;
	int deathRate;
	int population;
public:
	Population(int, int, int);
	void getBirthRate();
	void getDeathRate();
	void setPopulation(int);
	void setBirths(int);
	void setDeaths(int);
};

Population::Population(int br, int dr, int pop)
{
	birthRate = br;
	deathRate = dr;
	population = pop;
}

void Population::getBirthRate()
{
	cout << "The birthrate is currently " << (birthRate + population)<< " per year" << endl;
}

void Population::getDeathRate()
{
	cout << "The deathrate is currently " << (deathRate + population) << " per year" << endl;
}

void Population::setPopulation(int pop)
{
	cout << "What is the new population?";
	cin >> pop;
}

void Population::setBirths(int br)
{
	cout << "What is the new BirthRate?";
	cin >> br;
}

void Population::setDeaths(int dr)
{
	cout << "What is the new deathRate?";
	cin >> dr;
}

int main()
{
	int birth;
	int death;
	int population;

	cout << "Please enter the number of births, deaths, and population" << endl;

	cin >> birth;

	if (birth < 1)
	{
		birth = 1;
	}

	cin >> death;
	
	if (death < 1)
	{
		death = 1;
	}

	cin >> population;

	if (population < 2)
	{
		population = 2;
	}

	Population pop1(birth, death, population);
	pop1.getBirthRate();
	pop1.getDeathRate();
}