#pragma once
#include <string>
#include "Car.h"
#include "Person.h"
#include <vector>

class Dealership
{
//player can buy car from someone
//player can sell a car to someone


private:
	std::string mCompanyName;
	int mMoney;
	
	Car* mHasCar;

	std::vector<Car> mCars;
	std::vector<Person> mClients;

public:
	Dealership();
	Dealership(std::string companyName, int money);

	~Dealership();

	std::string GetName();
	int GetMoney();

	void AddClients(Person client);
	void AddCars(Car cars);
	void DisplayCarStorage();
	void DisplayClients();
};

