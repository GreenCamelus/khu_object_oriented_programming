#include<iostream>
#include"class.h"

using namespace std;
int main() {
	animal* a[3];
	for (int n = 0; n < 2; n++) {
		a[n] = new bird;
	}
	fish c;
	a[2] = &c;
	c.swim();
	((fish*)a[2])->swim();
	return 0;
}
