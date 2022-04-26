#pragma once
#include <string>	
#include "Car.h"

class Person
{
private:
	//Data Members
	//First Name
	std::string mFirstName;
	//Last Name
	std::string mLastName;
	//Birthdate
	int mBirthdateDay;
	std::string mBirthdateMonth;
	int mBirthdateYear;
	//Amount of Money
	int mMoney;
	//car ptr
	Car* mCar;
	//gender of person
	std::string mGender;

public:

	Person();
	//Constructors
	//check if person has a car (say has no car or print Car::DisplaySumUp)
	Person(std::string firstName, std::string lastName, int birthdateDay, std::string birthdateMonth, int birthdateYear, int money, std::string gender);
	Person(std::string firstName, std::string lastName, int birthdateDay, std::string birthdateMonth, int birthdateYear, int money, Car& car, std::string gender);
	~Person();

	//Getters
	std::string GetFirstName();
	std::string GetLastName();
	int GetBirthdateDay();
	std::string GetBirthdateMonth();
	int GetBirthdateYear();
	int GetMoney();
	Car* GetCar();
	std::string GetGender();

	//functions 
	void Introduce();
	void Age();
	void SellCar(Person& seller, Person& buyer, Car* car);
	void BuyCar(Person& buyer, Car* car);
	void DriveCar(Car* car, int drivingDistance);
	void PaintCar();

};

