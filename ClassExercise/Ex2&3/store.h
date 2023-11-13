#pragma once
#include"fruit.h"

class store {
public:
	store() {  };
	store(int n1, int n2, int n3, int n4, float p1, float p2, float p3, float p4) {
		apple = fruit(p1, n1);
		pear = fruit(p2, n2);
		peach = fruit(p3, n3);
		mango = fruit(p4, n4);
	}

	//member data
	fruit apple, pear, peach, mango;

	float total();
};
