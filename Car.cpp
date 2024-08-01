#include "Car.h"

//Constructor implementation
Car::Car(std::string ma, std::string mo, int y, double p)
	: make{ ma }, model{ mo }, year{ y }, price{ p } {};

// getMake method implementation
std::string Car::getMake() const {
	return make;
}

// getModel method implementation
std::string Car::getModel() const {
	return model;
}


// getYear method implementation
int Car::getYear() const {
	return year;
}

// getPrice method implementation
double Car::getPrice() const {
	return price;
}