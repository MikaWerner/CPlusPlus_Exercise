#pragma once
#include <string>	
#include "Car_Color.h"

class Car
{
private:
	//Car color
	Car_Color mColor;

	//Car brand
	std::string mBrand;
	//Car model
	std::string mModel;
	//LicensePlate
	std::string mLicensePlate; //german license plate City_Rand/CustomLetters_Rand/CustomNumber
	//Year of Creation
	int mYear;
	//Mileage Counter
	int mMileage;
	//Sell Value
	int mCostValue;




public:
	Car();
	Car(Car_Color color, std::string brand, std::string model, std::string licensePlate, int year, int mileage, int costValue);

	~Car();

	Car_Color GetColor();
	std::string GetColorString();
	std::string GetBrand();
	std::string GetModel();
	std::string GetLicensePlate();
	int GetYear();
	int GetMileage();
	int GetCostValue();

	//functions
	void DisplaySumUp();
	void DisplayDetailedInfo();
	void DriveMiles(int drivedDistance);
	void ChangeColor(Car_Color color);
};

