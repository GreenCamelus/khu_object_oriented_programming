#include"store.h"

float store::total() {
	float x = apple.show() + peach.show() + pear.show() + mango.show();
	return x;
}
