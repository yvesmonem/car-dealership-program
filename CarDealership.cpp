#include "Car.h"
#include "CarDealership.h"
#include <sstream>
#include <iomanip>
#include <string>

// addCar method implementation
void CarDealership::addCar(Car car) {
	cars.push_back(car);
}

//removeCar method implementation
void CarDealership::removeCar(int index) {
	cars.erase(cars.begin() + index);
}

std::string CarDealership::getInventory() const {
	std::ostringstream output;
	output << "Car dealership inventory:\n";
	for (int i = 0; i < cars.size(); i++) {
		output << "- " << cars[i].getMake() << " "
			<< cars[i].getModel() << " "
			<< cars[i].getYear() << ": "
			<< "$" << std::fixed << std::setprecision(2) << cars[i].getPrice() << std::endl;
	}
	return output.str();
}