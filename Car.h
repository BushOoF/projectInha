#ifndef CAR_H
#define CAR_H
#include<iostream>
#include<string>
#include<exception>
using namespace std;
class Car
{
protected:
	string name;
	int phone;
public:
	//constructors
	Car(string name, int phone);
	Car();
	//setter methods
	void setName(string sn);
	void setPhone(int sp);
	//getter methods
	string getName();
	int getPhone();
	//pure virtual functions
	virtual void model()=0;
	virtual void drivenDistance()=0;
	virtual void horsePower()=0;
	virtual void serialize() = 0;
	virtual void deserialize() = 0;

};
#endif // !CAR_H

