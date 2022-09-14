#include <iostream>
using namespace std;

struct Abstract {
	virtual void f() = 0;
	virtual void g() {}
	~Abstract()
	{
		g();
		Abstract::f();
	}
};
void Abstract::f() {
	cout << "A::f() \n";
}
struct Concrete :Abstract {
	void f() override {
		Abstract::f();
	}
	virtual void g() override {}
	~Concrete()
	{
		g();
		f();
	}
};

struct Abstract2 :Concrete {
	void g() override = 0;
};

int main()
{
	Concrete b;
	Abstract& a = b;
	a.f();
}
