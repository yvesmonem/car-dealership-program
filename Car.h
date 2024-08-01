#ifndef CAR_H
#define CAR_H
#include<string>
using namespace std;
class Car {
private:
	string make;
    string model;
	int year;
	double price;

public:
	Car(string, string, int, double);
	string getMake() const;
	string getModel() const;
	int getYear() const;
	double getPrice() const;
};

#endif
