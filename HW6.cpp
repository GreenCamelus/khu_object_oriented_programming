#include <iostream>
#include<fstream>
using namespace std;

int multi5(int);
float sqr2(float);

void multi5(int*);
void sqr2(float*);

void All(int, int*, float*, ofstream&);

int main() {
	//방법 1

	ofstream x("1.dat", ios::binary|ios::out);

	int a, * b;
	a = 1234;

	x.write((char*)&a, sizeof(int));
	
	b = new int[5];
	for (int i = 0; i < 5; i++) { b[i] = multi5((i + 1) * 1000); cout << b[i] << endl; }
	
	x.write((char*)b, sizeof(int) * 5);

	float* c;
	c = new float[3];
	for (int i = 0; i < 3; i++) { c[i] = sqr2(0.5 * i - 0.5); cout << c[i] << endl; }

	x.write((char*)c, sizeof(float) * 3);

	delete[] b;
	delete[] c;

	//방법2
	ofstream xx("2.dat", ios::binary|ios::out);

	xx.write((char*)&a, sizeof(int));

	int* bb;
	bb = new int[5];
	multi5(bb);
	xx.write((char*)bb, sizeof(int)*5);

	float* cc;
	cc = new float[3];
	sqr2(cc);
	xx.write((char*)cc, sizeof(float) * 3);

	xx.close();
	delete[] bb;
	delete[] cc;

	//방법3
	ofstream xxx("3.dat", ios::binary | ios::out);

	int* bbb;
	bbb = new int[5];
	multi5(bbb);

	float* ccc;
	ccc = new float[3];
	sqr2(ccc);

	char* dd;
	dd = new char[48];

	for (int i = 0; i < sizeof(int); i++) dd[i] = *((char*)&a + i);
	for (int i = 0; i < sizeof(int)*5; i++) dd[i] = *((char*)bbb + i);
	for (int i = 0; i < sizeof(float)*3; i++) dd[i] = *((char*)ccc + i);

	xxx.write((char*)dd, 36);

	xxx.close();
	delete[] bbb;
	delete[] ccc;

	//방법 4
	ofstream xxxx("4.dat", ios::binary | ios::out);

	int* bbbb;
	bbbb = new int[5];

	float* cccc;
	cccc = new float[3];

	All(a, bbbb, cccc, xxxx);

	xxxx.close();
	delete[] bbbb;
	delete[] cccc;
}
//1
int multi5(int n) {
	return n * 5;
}

float sqr2(float k) {
	return k * k;
}

//2
void multi5(int* n) {
	for (int i = 0; i < 5; i++)  n[i] = multi5((i + 1) * 1000);
}

void sqr2(float* n) {
	for (int i = 0; i < 3; i++)  n[i] = 0.5 * i - 0.5;
}

void All(int a, int* b, float* c, ofstream& xx) {
	multi5(b);
	sqr2(c);

	char* dd;
	dd = new char[48];

	for (int i = 0; i < sizeof(int); i++) dd[i] = *((char*)&a + i);
	for (int i = 0; i < sizeof(int) * 5; i++) dd[i] = *((char*)b + i);
	for (int i = 0; i < sizeof(float) * 3; i++) dd[i] = *((char*)c + i);

	xx.write((char*)dd, 36);
	delete[] dd;
}