#ifndef PICKUP_H
#define PICKUP_H
#include<iostream>
#include<string>
#include<exception>
#include"Car.h"
#include<fstream>
class PickUp :public Car
{
private:
	int maxLuggage;
	string carModel;
	int distance;
	int power;
public:
	//constructor
	PickUp();
	PickUp(int ms);
	//setter method
	void setMaxLuggage(int sm);
	//getter method
	int getMaxLuggage();
	//overriding virtual functions
	void model(string md);
	void drivenDistance(int dd);
	void horsePower(int hp);
	void serialize(std::ofstream& out) const {
		out << name << ' ' << phone << ' ' << carModel << ' ' << distance << ' ' << power << ' ' << maxLuggage << '\n';
	}
	void deserialize(std::ifstream& in) {
		in >> name >> phone >> carModel >> distance >> power >> maxLuggage;
	}
};
#endif // !PICKUP_H

