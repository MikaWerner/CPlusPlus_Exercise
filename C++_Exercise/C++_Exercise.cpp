#include <iostream>
#include <vector>
#include "Person.h"
#include "Car.h"
#include "Dealership.h"

using namespace std;

int main()
{
	/* OUTPUT
	> The person John was created
	> John Doe was born on June 25, 1990 and is a man
	> John has 25320€ and no car
	> The car Peugeot 208 was created
	> It is a red car with license plate GH-456-XD
	> With a mileage of 12563 km, it has a value of 7251€
	> The person Alex was created
	> Alex Bean was born on September 2, 1995 and is non-binary
	> Alex has 5432€ and a Peugeot 208 (GH-456-XD)
	> Alex sells their car to John
	> Alex earned 7251€, they now have 12683€
	> John spent 7251€, they now have 18076€
	> John Doe was born on June 25, 1990 and is a man
	> John has 25320€ and a Peugeot 208 (GH-456-XD)
	> John rolls with the Peugeot 208 (GH-456-XD) for 16km
	> The Peugeot 208 (GH-456-XD) mileage is now 12579km
	> John paints his car blue
	> Peugeot 208 now has the color blue
	*/

	cout << "moin \n";

	//Adding Cars (Color, Brand, Model, LicensePlate, Year, Mileage, CostValue)
	Car PlantBoisCar = Car(Car_Color::green, "Opel", "Zafira Life", "WI-HP-00", 2020, 1000, 5938);

	//Adding People (FirstName, LastName, BirthdateDay, BirthdateMonth, BirthdateYear, Money, Car, Gender) = with car
	//or (FirstName, LastName, BirthdateDay, BirthdateMonth, BirthdateYear, Money, Gender) = no car
	Person PlantBoi = Person("Humphry", "Van Plant", 1, "November", 2022, 10000, PlantBoisCar, "male");
	Person Cactus = Person("Charlotte", "the Cactus", 10, "September", 2020, 20000 ,"non-binary");

	//Dealership (Companyname, money)
	Dealership Dealer = Dealership("Omega Transformer Cars Dealership", 10);

	//line 1
	cout << "> The person " << Cactus.GetFirstName() << " was created. \n";

	//line 2 + 3
	Cactus.Introduce();

	//line 4 + 5 + 6
	PlantBoisCar.DisplayDetailedInfo();

	cout << "\n";

	//line 7
	cout << "> The person " << PlantBoi.GetFirstName() << " was created. \n";

	//line 8 + 9
	PlantBoi.Introduce();

	//line 10 + 11 + 12
	//SellCar (Seller, Buyer, Car)
	PlantBoi.SellCar(PlantBoi, Cactus, &PlantBoisCar);
	//Buycar (Buyer, Car)
	Cactus.BuyCar(Cactus, &PlantBoisCar);
	//It works when a seller without a car tries to sell another car 
	//Cactus.SellCar(Cactus, PlantBoi, PlantBoisCar);

	cout << "\n";

	//line 13 + 14
	Cactus.Introduce();
	
	//line 15 + 16
	//DriveCar (Car, DrivingDistance)
	Cactus.DriveCar(&PlantBoisCar, 20);

	//line 17 + 18 plus extra customization
	Cactus.PaintCar();

	

	//Client List
	cout << "\n \n ////////////Dealership////////////// \n\n";

	//Add here new clients to client index
	Dealer.AddClients(PlantBoi);
	Dealer.AddClients(Cactus);

	cout << "\n";

	Dealer.DisplayClients();

	cout << "\n";

	Dealer.AddCars(PlantBoisCar);
	
	cout << "\n";

	Dealer.DisplayCarStorage();
}
