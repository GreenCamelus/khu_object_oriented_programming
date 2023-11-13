#include <iostream>
#include "store.h"
using namespace std;

int main() {
	store A, B;
	B = store(3, 4, 5, 7, 100, 200, 300, 500);
	cout << A.total() << endl;
	cout << B.total() << endl;

	B *= 3;

	cout << B.total() << endl;
}
