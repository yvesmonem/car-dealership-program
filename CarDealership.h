#ifndef CARDEALERSHIP_H
#define CARDEALERSHIP_H
#include <vector>
#include "Car.h"
#include <string>
class CarDealership {
private:
	std::vector<Car> cars;
public:
	void addCar(Car);
	void removeCar(int);
	std::string getInventory() const;
};
#endif
