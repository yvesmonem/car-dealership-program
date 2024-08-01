#include <iostream>
#include "CarDealership.h"
#include "Car.h"
using namespace std;

int main() {
	//Instantiate dealership object
	CarDealership dealership;

	//Create 3 cars instance of Car
	Car car1{ "Ford", "Mustang", 2022, 14500.5 };
	Car car2{ "Chevrolet", "Camaro", 2020, 12500.3 };
	Car car3{ "Toyota", "FJ Cruiser", 2019, 24000.5 };

	// Add the previously created cars to dealership
	dealership.addCar(car1);
	dealership.addCar(car2);
	dealership.addCar(car3);

	// Print the inventory of the dealership
	cout << dealership.getInventory();

	// Remove chevrolet from the dealership (index 1)
	dealership.removeCar(1);

	// Print the inventory again.
	cout << endl << dealership.getInventory();

	return 0;
}