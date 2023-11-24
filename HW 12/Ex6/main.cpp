#include <iostream>
using namespace std;
class ECE {
public:
	ECE() : n(10) { cout << " new ECE\n"; };
	int n;
	~ECE() { cout << " kill ECE\n"; }
};
class EE : public ECE {
public:
	EE() : m(20) { cout << " new EE\n"; };
	int m;
	~EE() { cout << " kill EE\n"; }
};
class CE : public ECE {
public:
	CE() { cout << " new CE\n"; };
	~CE() { cout << " kill CE\n"; }
};

ECE Jhop;
void show() { EE Jin; }

int main() {
	for (int i = 0; i < 3; i++) {
		ECE RM;
	}
	cout << " end of for-loop\n";
	show();
	cout << " after show()\n";
	return 123;
}
