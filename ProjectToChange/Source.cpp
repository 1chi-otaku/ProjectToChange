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
	

	return 0;
}