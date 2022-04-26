#include "Car.h"
#include <iostream>
using namespace std;

Car::Car()
{
	mColor = Car_Color::black;
	mBrand = "Default";
	mModel = "Default";
	mLicensePlate = "Default";
	mYear = 2000;
	mMileage = 0;
	mCostValue = 0;
}
Car::Car(Car_Color color, string brand, string model, string licensePlate, int year, int mileage, int costValue)
{
	mColor = color;
	mBrand = brand;
	mModel = model;
	mLicensePlate = licensePlate;
	mYear = year;
	mMileage = mileage;
	mCostValue = costValue;
}
//Deconstructor
Car::~Car()
{

}

//Getters
Car_Color Car::GetColor()
{
	return mColor;
}
string Car::GetColorString() //spit out stringssssssss sir
{
	//enum bleh out string
	switch (mColor)
	{
	//blue
	case Car_Color::blue:
		return "blue";
	//red
	case Car_Color::red:
		return "red";
	//yellow
	case Car_Color::yellow:
		return "yellow";
	//green
	case Car_Color::green:
		return "green";
	//cyan
	case Car_Color::cyan:
		return "cyan";
	//magenta
	case Car_Color::magenta:
		return "magenta";
	//orange
	case Car_Color::orange:
		return "orange";
	//black
	case Car_Color::black:
		return "black";
	//white
	case Car_Color::white:
		return "white";
	}
}
string Car::GetBrand()
{
	return mBrand;
}
string Car::GetModel()
{
	return mModel;
}
string Car::GetLicensePlate()
{
	return mLicensePlate;
}
int Car::GetYear()
{
	return mYear;
}
int Car::GetMileage()
{
	return mMileage;
}
int Car::GetCostValue()
{
	return mCostValue;
}

//functions
void Car::DisplaySumUp() //DONE
{
	//display Brand_Model_(LicensePlate)
	//because exspected output "The person _ was created" should be seperate of other Info 
	cout << mBrand << " " << mModel << " (" << mLicensePlate << "). \n";
}
void Car::DisplayDetailedInfo() //DONE
{
	//display other Info
	cout << "> The car " << mBrand << " " << mModel << " was created. \n";
	cout << "> It is a " << GetColorString() << " car with the licenseplate " << mLicensePlate << ". \n";
	cout << "> With a mileage of " << mMileage << "KM, it has a value of " << mCostValue << "EURO. \n";
}
void Car::DriveMiles(int drivedDistance) //DONE
{
	//Driving mileage added from person class
	mMileage = mMileage + drivedDistance;
	cout << "> The car " << mBrand << " " << mModel << " (" << mLicensePlate << ") has now a mileage of " << drivedDistance << "KM. \n";
}
void Car::ChangeColor(Car_Color color) //DONE
{	
	//cout << "Which color do you wish to paint your car?" << endl; + cin for more interactivity
	mColor = color; //new color
	cout << "> " << mBrand << " " << mModel << " now has the color " << GetColorString() << ". \n";
}