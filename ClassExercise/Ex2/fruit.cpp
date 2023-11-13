#include"fruit.h"
#include<iostream>

float fruit::show() {
	return price * many;
}
void fruit::show_all() {
	std::cout << price << std::endl;
	std::cout << many << std::endl;
	std::cout << day << std::endl;
}
