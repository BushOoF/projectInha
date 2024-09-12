#include"Pickup.h"
//constructor
PickUp::PickUp()
{
	maxLuggage = 220;
}
PickUp::PickUp(int ms)
{
	maxLuggage = ms;
}
//setter
void PickUp::setMaxLuggage(int sm)
{
	try {
		if (sm <= 0)
		{
			throw exception("Invalid max speed !!!");
		}
		else {
			cout << "Type max speed of the car : "; cin >> sm;
			maxLuggage = sm;
		}
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}
}
//getter
int PickUp::getMaxLuggage()
{
	return(maxLuggage);
}
//overriding virtual functions
void PickUp::model(string md)
{
	carModel = md;
}
void PickUp::drivenDistance(int dd)
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
void PickUp::horsePower(int hp)
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