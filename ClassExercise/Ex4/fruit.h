#pragma once

class fruit {
public:
	// constructor
	fruit() {
		price = 200; many = 2;
		day = 12;
		i++;
	}
	fruit(float p, int n) {
		price = p;
		many = n;
		day = 12;
		i++;
	}
	fruit(float p, int n, int d) {
		price = p;
		many = n;
		day = d;
		i++;
	}
	// member data
	int many, day;
	float price;
	static int i;

	// member function
	float show();
	void show_all();
};
