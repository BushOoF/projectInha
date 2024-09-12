#ifndef SEDAN_H
#define SEDAN_H
#include<iostream>
#include<string>
#include<exception>
#include"Car.h"
#include<fstream>
class Sedan :public Car
{
private:
	int maxSpeed;
	string carModel;
	int distance;
	int power;
public:
	//constructor
	Sedan();
	Sedan(int ms);
	//setter method
	void setMaxSpeed(int sm);
	//getter method
	int getMaxSpeed();
	//overriding virtual functions
	void model(string md);
	void drivenDistance(int dd);
	void horsePower(int hp);
	void serialize(std::ofstream& out) const {
		out << name << ' ' << phone << ' ' << carModel << ' ' << distance << ' ' << power << ' ' << maxSpeed << '\n';
	}
	void deserialize(std::ifstream& in) {
		in >> name >> phone >> carModel >> distance >> power >> maxSpeed;
	}

};
#endif // !SEDAN_H

