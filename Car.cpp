#include<iostream>
#include<string>
#include"Car.h"
//constructors
Car::Car()
{
	name = "Bush";
	phone = 998991234567;
}
Car::Car(string sn, int sp)
{
	name = sn;
	phone = sp;
}
//setter methods
void Car::setName(string sn) 
{
	cout << "Type your name : "; cin >> sn;
	name = sn;
}
void Car::setPhone(int sp)
{
	try {
		if (sp <= 0)
		{
			throw exception("Invalid phone number !!!");
		}
		else {
			cout << "Type your phone number : "; cin >> sp;
			phone = sp;
		}
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}
}
//getter methods
string Car::getName()
{
	return(name);
}
int Car::getPhone()
{
	return(phone);
}