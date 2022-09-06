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

int main() {
	Point obj1;
	Point obj2(5,4,10);
	obj1.Print();
	return 0;
}