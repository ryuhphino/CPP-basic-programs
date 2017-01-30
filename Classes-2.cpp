//Matthew Bowling
//Classes-2

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Car
{
private:
	int Year;
	string Make;
	int Speed;
public:
	Car(int, string, int);
	void CarAccessor();
	void Accelerate();
	void Brake();
};

Car::Car(int y, string m, int s)
{
	Year = y;
	Make = m;
	Speed = s;
}

void Car::CarAccessor()
{
	cout << "Your year is " << Year << " and make is " << Make << " going " << Speed << " mph." << endl;
}

void Car::Accelerate()
{
	Speed += 5;
	cout << "The vehicle is now going " << Speed << " MPH" << endl;
}

void Car::Brake()
{
	Speed -= 5;
	cout << "The vehicle is now going " << Speed << " MPH" << endl;
}

int main()
{
	int year;
	string make;
	int speed;
	cout << "Please enter a Year, Make, and the speed the vehicle is at" << endl;
	cin >> year;
	cin >> make;
	cin >> speed;

	Car Vehicle1 (year, make, speed);
	Vehicle1.Accelerate();
	Vehicle1.Accelerate();
	Vehicle1.Accelerate();
	Vehicle1.Accelerate();
	Vehicle1.Accelerate();
	Vehicle1.CarAccessor();
	Vehicle1.Brake();
	Vehicle1.Brake();
	Vehicle1.Brake();
	Vehicle1.Brake();
	Vehicle1.Brake();

}