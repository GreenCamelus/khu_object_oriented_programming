#include"store.h"

float store::total() {
	float x = apple.show() + peach.show() + pear.show() + mango.show();
	return x;
}
void store::operator*=(int n) {
	apple.many *= n;
	peach.many *= n;
	pear.many *= n;
	mango.many *= n;
}
