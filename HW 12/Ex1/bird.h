#pragma once
#include"animal.h"

class bird : public animal {
public:
	bird() : nWings(2) {};
	int nWings;
	void fly() {
		std::cout << "I fly \n";	
	}
	
};
