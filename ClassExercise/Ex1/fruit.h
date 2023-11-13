#pragma once

class fruit {
public:
	// constructor
	fruit() {
		price = 200; many = 2; // default values
		day = 12;
	}
	fruit(float p, int n) {
		price = p;
		many = n;
	}
	fruit(float p, int n, int d) {
		price = p;
		many = n;
		day = d;
	}
	// member data
	int many, day;
	float price;
	// member function
	float show() {
		return price * many;
	}
	float show_all() {
		std::cout << price << std::endl;
		std::cout << many << std::endl;
		std::cout << day << std::endl;
	}
};
