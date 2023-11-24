#include <iostream>
using namespace std;
class mm {
public:
	mm() { a = 4 + 300; cout << "mm\n"; }
	mm(int b) { a = b + 100; cout << "mmb\n"; }
	int a;
};
class nn : public mm {
public:
	nn() { a = 11;  cout << "nn\n"; }
	nn(int b) { c = a;  a = b; mm::mm(a);  cout << "nnb\n"; }
	int c;
};

class oo : public nn {
public:
	oo() { a = 10; cout << "oo\n"; }
	oo(int n) {  c = a; d = c; a = n; mm::mm(a); cout << "oon\n"; }
	int d;
};
int main() {
	oo pp(5);
	cout << pp.a << endl;
	cout << pp.c << endl;
	cout << pp.d << endl;
	return 123;
}
