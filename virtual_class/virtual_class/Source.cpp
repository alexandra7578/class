#include <iostream>
using namespace std;

class Base {
public:
	void print() {
		cout << "In Base::print() function \n";
	}
};

class Child : public Base {
public:
	void print() {
		cout << "In Child::print() function \n";
	}
};

int main() {
	Base b;
	b.print();

	Child c;
	c.print();

	Base b1 = c;
	b1.print();
	Base* b2 = &c;
	b2->print();
	((Base)c).print();
	return 0;
}