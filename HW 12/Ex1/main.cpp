#include"animal.h"
#include"bird.h"
#include"human.h"
#include"fish.h"


int main() {
	animal a;
	human b;
	bird c;
	fish d;

	a.eat();
	b.eat();
	c.eat();
	d.eat();

	b.walk();
	c.fly();
	d.swim();

	std::cout << " b " << b.nLegs << "\n";
	return 0;
}
