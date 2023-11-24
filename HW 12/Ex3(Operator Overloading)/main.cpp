#include "class.h"
#include <iostream>  //  for cout
using namespace std;

Car::Car(float ss, int ww, float pp) {
	speed = ss;
	wheels = ww;
	price = pp;
	std::cout << " new Car \n";
}
void Car::speedUp(float x) { speed += x; }
void Car::speedDown(float x) { speed -= x; }
void Car::setPrice(float x) { price = x; }
float Car::getPrice() { return price; }
void Car::speedChange(float x) {
	if (x > 0) speedUp(x);
	else speedDown(-x);
}
void Car::setWheels(int n) { wheels = n; }
int Car::getWheels() { return wheels; }
void Car::klaxon(int n) {
	for (int i = 0; i < n; i++) {
		std::cout << "  no horn \n";
	}
}

Car& Car::operator+(const Car& AA) {
	this->wheels += AA.wheels;
	this->price += AA.price;
	this->speed += AA.speed;

	return *this;
}

int main() {
	Car A(90, 4, 1900), B(30, 2, 2500);

	Car C = A + B;

	cout << C.speed << endl;
	cout << C.wheels << endl;
	cout << C.getPrice() << endl;
}
