#pragma once
class queue {
public:
	queue() {
		QI = 0; QO = 0; capa = 0;
	}
	queue(int a, int b, int c) {
		QI = a; QO = b; capa = c;
	}
	int QI, QO, capa;

	void runEx(std::string);
};
