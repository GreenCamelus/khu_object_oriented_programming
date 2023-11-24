#pragma once
#include<iostream>
using namespace std;

class Car {
public:
	Car() :speed(0.1), wheels(0), price(0.2) {};
	Car(float, int, float);
	//virtual  
	virtual void klaxon(int);
	virtual void hibar();
	void setPrice(float);
	float getPrice();
	float speed;
	void speedChange(float);
	int wheels;
	void setWheels(int);
	int getWheels();

	friend class Engineer;
protected:
	float price;
	void speedUp(float);
	void speedDown(float);
};

class SUV : public Car {
private:
	int spareWheels;
public:
	void klaxon(int);
	void hibar();

	void setSparewheels(int);
	int getSparewheels();
	float getTotalPrice();
};
