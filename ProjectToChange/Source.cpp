#include <iostream>
using namespace std;
class Point {
	int a, b, c;
public:
	Point() {
		a = b =c = 0;

	}
	Point(int a, int b, int c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	void Print() {
		cout << "a - " << a << endl;
		cout << "b - " << b << endl;
		cout << "c - " << c << endl;
	}
};
class Person {
	string name;
	int age;
public:
	

};
class Student {
	string name;
	string age;
public:
	Student(string name, string age) {
		this->name = name;
		this->age = age;
	}
	Student() {
		name = "name";
		age = "100";
	}
};

int main() {
	Point obj1;
	Point obj2(5,4,10);
	obj1.Print();
	return 0;
}