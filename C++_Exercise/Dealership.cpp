#include "Dealership.h"
#include "Car.h"
#include "Person.h"
#include <iostream>
using namespace std;


Dealership::Dealership()
{
	mCompanyName = "Default";
	mMoney = 0;
}
Dealership::Dealership(string companyName, int money)
{
	mCompanyName = companyName;
	mMoney = money;
}
Dealership::~Dealership()
{

}

string Dealership::GetName()
{
	return mCompanyName;
}
int Dealership::GetMoney()
{
	return mMoney;
}

void Dealership::AddCars(Car cars) //DONE
{
	mCars.push_back(cars);
	cout << "> " << mCompanyName << " added another car: " << cars.GetBrand() << " " << cars.GetModel() << " (" << cars.GetLicensePlate() << ") \n";
}
void Dealership::DisplayCarStorage() //DONE
{
	cout << "> " << mCompanyName << " has the following cars in storage : \n";
	for (int i = 0; i < mCars.size(); i++)
	{
		cout << "\t Car nb." << (i + 1) << " : ";
		//display client info of every client
		cout << "\t " << mCars[i].GetBrand() << ", "
			<< mCars[i].GetModel() << ", "
			<< mCars[i].GetColorString() << ", "
			<< mCars[i].GetYear() << "."
			<< mCars[i].GetLicensePlate() << "."
			<< mCars[i].GetMileage() << ", "
			<< mCars[i].GetCostValue() << "\n";
	}
}
void Dealership::AddClients(Person client) //DONE
{
	mClients.push_back(client);
	cout << "> " << mCompanyName << " added another client: " << client.GetFirstName() << "." << endl;
}
void Dealership::DisplayClients() //DONE
{
	cout << "> " << mCompanyName << " has the following clients registered in the Client index : \n";
	for (int i = 0; i < mClients.size(); i++)
	{
		cout << "\t Client nb." << (i + 1) << " : ";
		//every client displays all info
		cout << "\t " << mClients[i].GetFirstName() << ", "
			<< mClients[i].GetLastName() << ", "
			<< mClients[i].GetBirthdateDay() << "."
			<< mClients[i].GetBirthdateMonth() << "."
			<< mClients[i].GetBirthdateYear() << ", "
			<< mClients[i].GetGender() << "\n";
	}
}

