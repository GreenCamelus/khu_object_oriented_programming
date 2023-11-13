#include <iostream>
#include "store.h"
using namespace std;

int fruit::i = 0;
int main() {
	store A;
	cout << fruit::i << endl; // 4

	store B(3, 4, 5, 7, 100, 200, 300, 500);

	cout << fruit::i << endl; // 12 

	fruit tangerine;

	cout << fruit::i << endl; // 13

	fruit grape(1000, 3);

	cout << fruit::i << endl; // 14

	cout << A.total() << endl;
	cout << B.total() << endl;


	B *= 3;

	cout << B.total() << endl;
}
