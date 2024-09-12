#include"Sedan.h"
//constructor
Sedan::Sedan()
{
	maxSpeed = 220;
}
Sedan::Sedan(int ms)
{
	maxSpeed = ms;
}
//setter
void Sedan::setMaxSpeed(int sm)
{
	try {
		if (sm <= 0)
		{
			throw exception("Invalid max speed !!!");
		}
		else {
			cout << "Type max speed of the car : "; cin >> sm;
			maxSpeed = sm;
		}
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}
}
//getter
int Sedan::getMaxSpeed()
{
	return(maxSpeed);
}
//overriding virtual functions
void Sedan::model(string md)
{
	carModel = md;
}
void Sedan::drivenDistance(int dd)
{
	try {
		if (dd <= 0)
		{
			throw exception("Invalid distance !!!");
		}
		else {
			cout << "Type driven distance of the car : "; cin >> dd;
			distance = dd;
		}
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}
}
void Sedan::horsePower(int hp)
{
	try {
		if (hp <= 0)
		{
			throw exception("Invalid horse power !!!");
		}
		else {
			cout << "Type horse power of the car : "; cin >> hp;
			power = hp;
		}
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}
}