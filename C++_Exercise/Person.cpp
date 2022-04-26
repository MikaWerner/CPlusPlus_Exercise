#include "Person.h"
#include "Car.h"

//in order to write and use strings without constantly writing std::string 
#include <iostream>
using namespace std;

Person::Person()
{
	mFirstName = "Default";
	mLastName = "Default";
	mBirthdateDay = 1;
	mBirthdateMonth = "Default";
	mBirthdateYear = 2000;
	mMoney = 0;
	mCar = nullptr;
	mGender = "Default";
}

Person::Person(string firstName, string lastName, int birthdateDay, string birthdateMonth, int birthdateYear, int money, string gender)
{
	mFirstName = firstName;
	mLastName = lastName;
	mBirthdateDay = birthdateDay;
	mBirthdateMonth = birthdateMonth;
	mBirthdateYear = birthdateYear;
	mMoney = money;
	mCar = nullptr;
	mGender = gender;
}

Person::Person(string firstName, string lastName, int birthdateDay, string birthdateMonth, int birthdateYear, int money, Car& car, string gender)
{
	mFirstName = firstName;
	mLastName = lastName;
	mBirthdateDay = birthdateDay;
	mBirthdateMonth = birthdateMonth;
	mBirthdateYear = birthdateYear;
	mMoney = money;
	mCar = &car;
	mGender = gender;
}

//Deconstructor
Person::~Person()
{
	//empty like my soul
}


//Getters
string Person::GetFirstName()
{
	return mFirstName;
}
string Person::GetLastName()
{
	return mLastName;
}
int Person::GetBirthdateDay()
{
	return mBirthdateDay;
}
string Person::GetBirthdateMonth()
{
	return mBirthdateMonth;
}
int Person::GetBirthdateYear()
{
	return mBirthdateYear;
}
int Person::GetMoney()
{
	return mMoney;
}
Car* Person::GetCar()
{
	return mCar;
}
string Person::GetGender()
{
	return mGender;
}

//functions
void Person::Introduce() //DONE
{
	//Example of output: Alex Bean was born on September 2, 1995 and is non-binary
	cout << "> " << mFirstName << " " << mLastName << " was born on " << mBirthdateMonth << " " << mBirthdateDay << ", " << mBirthdateYear << " and identifies as " << mGender << ".\n";
	
	cout << "> " << mFirstName << " has " << mMoney << "EURO and ";

	//if no car exists (nullptr)
	if (mCar == nullptr)
	{
		cout << "has no car.\n";
	}
	//if car exist
	else
	{
		cout << "has a ";
		mCar->DisplaySumUp();	
	}

	cout << endl;
}
void Person::Age() //optional
{
	//calculating age to current year
	cout << "> Their age is currently " << 2022 - mBirthdateYear << ". \n";
}
void Person::SellCar(Person& seller, Person& buyer, Car* car)  //DONE
{
	//seller gains money + looses car
	if (seller.mCar != nullptr) //if seller has a car
	{
	cout << "> " << seller.GetFirstName() << " sells the car to " << buyer.GetFirstName() << ". \n";
	cout << "> " << seller.GetFirstName() << " earned " << car->GetCostValue() << "EURO, they now have " << seller.GetMoney() + car->GetCostValue() << "EURO. \n";
	seller.mCar = nullptr;
	}
	else
	{
	cout << "> " << seller.GetFirstName() << " does not hav a car to put up for sell. \n";
	}
}
void Person::BuyCar(Person& buyer, Car* car) //DONE
{
	//buyer looses money + gains a car 
	if (mMoney >= car->GetCostValue())
	{
		buyer.mMoney = buyer.mMoney - car->GetCostValue();
		cout << "> " << buyer.GetFirstName() << " spent " << car->GetCostValue() << "EURO, they now have " << buyer.GetMoney() << "EURO. \n";
		buyer.mCar = car;
	}
	else
	{
		cout << mFirstName << " does not have enough money to buy the car. \n";
	}
}
void Person::DriveCar(Car* car, int drivingDistance) //DONE
{
	cout << "> " << mFirstName << " drives the car " << car->GetBrand() << " " << car->GetModel() << " (" << mCar->GetLicensePlate() << ") for " << drivingDistance << "KM. \n";
	car->DriveMiles(drivingDistance); //executes function in car class
}
void Person::PaintCar() //DONE
{
	int choice = 0;

	//if answer is not valid then repeat question + options 
	do {
		cout << "> The car has the color " << mCar->GetColorString() << " at the moment. \n";
		cout << "> Which color shall it be? \n";
		cout << "\t Blue(1), Red(2), Yellow(3), Green(4), Cyan(5), Magenta(6), Orange(7), Black(8), White(9) \n"; //probelm is to manually add colors here

		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			cout << "> " << mFirstName << " has painted their car in the color blue." << endl;
			//change color
			mCar->ChangeColor(Car_Color::blue);
			goto finish_Point;
		}
		case 2:
		{
			cout << "> " << mFirstName << " has painted their car in the color red." << endl;
			//change color
			mCar->ChangeColor(Car_Color::red);
			goto finish_Point;
		}
		case 3:
		{
			cout << "> " << mFirstName << " has painted their car in the color yellow." << endl;
			//change color
			mCar->ChangeColor(Car_Color::yellow);
			goto finish_Point;
		}
		case 4:
		{
			cout << "> " << mFirstName << " has painted their car in the color green." << endl;
			//change color
			mCar->ChangeColor(Car_Color::green);
			goto finish_Point;
		}
		case 5:
		{
			cout << "> " << mFirstName << " has painted their car in the color cyan." << endl;
			//change color
			mCar->ChangeColor(Car_Color::cyan);
			goto finish_Point;
		}
		case 6:
		{
			cout << "> " << mFirstName << " has painted their car in the color magenta." << endl;
			//change color
			mCar->ChangeColor(Car_Color::magenta);
			goto finish_Point;
		}
		case 7:
		{
			cout << "> " << mFirstName << " has painted their car in the color orange." << endl;
			//change color
			mCar->ChangeColor(Car_Color::orange);
			goto finish_Point;
		}
		case 8:
		{
			cout << "> " << mFirstName << " has painted their car in the color black." << endl;
			//change color
			mCar->ChangeColor(Car_Color::black);
			goto finish_Point;
		}
		case 9:
		{
			cout << "> " << mFirstName << " has painted their car in the color white." << endl;
			//change color
			mCar->ChangeColor(Car_Color::white);
			goto finish_Point;
		}
		default: cout << "> Valid are only numbers between 1 to 9. \n"; //displayed if input other than the given 
		}
	} while (true);
finish_Point:; //every case jumps to this point in order to avoid being repeated
}
//reference or possible Output for case string 
//cout << "> " << mFirstName << " paints the car in the new color " << mCar->GetColorString() << endl;


