#include<iostream>
using namespace std;
class Person {
public:
	Person(int x) { 
		cout << "Person::Person(int ) called" << endl; 
		age = 25;
		cout << "Personage : " << age << endl;
	}
	Person() { cout << "Person::Person() called" << endl;  age = 25; }
	int age;
};

class Faculty : virtual public Person {
public:
	Faculty(int x) :Person(x) {
		int id = 10000000;
		cout << "Faculty::Faculty(int ) called" << endl;
		cout << "Faculty id : " << id << endl;
		
	}
	int id;
};

class Student : virtual public Person {
public:
	Student(int x) :Person(x) {
		midterm_score = 50;
		cout << "Student::Student(int ) called" << endl;
		cout << "Student score : " << midterm_score << endl;
	}
	int midterm_score;
};

class TA : public Faculty, public Student {
public:
	TA(int x) :Student(x), Faculty(x) {
		cout << "TA::TA(int ) called" << endl;
	}
};

int main() {
	TA ta1(30);

}
