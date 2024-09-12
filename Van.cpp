#include"Van.h"
//constructor
Van::Van()
{
	maxPeople = 220;
}
Van::Van(int mp)
{
	maxPeople = mp;
}
//setter
void Van::setMaxPeople(int mp)
{
	try {
		if (mp <= 0)
		{
			throw exception("Invalid max number of people !!!");
		}
		else {
			cout << "Type max number of people : "; cin >> mp;
			maxPeople = mp;
		}
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}
}
//getter
int Van::getMaxPeople()
{
	return(maxPeople);
}
//overriding virtual functions
void Van::model(string md)
{
	carModel = md;
}
void Van::drivenDistance(int dd)
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
void Van::horsePower(int hp)
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