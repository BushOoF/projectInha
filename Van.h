#ifndef VAN_H
#define VAN_H
#include<iostream>
#include<string>
#include<exception>
#include"Car.h"
#include<fstream>
class Van :public Car
{
private:
	int maxPeople;
	string carModel;
	int distance;
	int power;
public:
	//constructor
	Van();
	Van(int mp);
	//setter method
	void setMaxPeople(int mp);
	//getter method
	int getMaxPeople();
	//overriding virtual functions
	void model(string md);
	void drivenDistance(int dd);
	void horsePower(int hp);
	void serialize(std::ofstream& out) const {
		out << name << ' ' << phone << ' ' << carModel << ' ' << distance << ' ' << power << ' ' << maxPeople << '\n';
	}
	void deserialize(std::ifstream& in) {
		in >> name >> phone >> carModel >> distance >> power >> maxPeople;
	}
};
#endif // !VAN_H
