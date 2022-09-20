#include <iostream>
using namespace std;
class Complex {
private:
	double a, b;
public:
	Complex(double = 1.0, double = 1.0);
	void set(double, double);
	void print();
	Complex operator+(Complex);
	Complex operator++();
	Complex operator++(int);
};

Complex::Complex(double r, double i)
{
	set(r, i);
}

void Complex::set(double r, double i)
{
	a = r;
	b = i;
}

void Complex::print()
{
	if (b < 0)
		cout << "\n" << a << "" << b << "i" << endl;
	else
		cout << "\n" << a << "+ " << b << "i" << endl;
}

Complex Complex::operator+(Complex R)
{
	Complex tmp;
	tmp.a = a + R.a;
	tmp.b = b + R.b;
	return tmp;
}

Complex Complex::operator++()
{
	a++;
	b++;
	return *this;
}

Complex Complex::operator++(int x)
{
	a++;
	b++;
	return *this;
}

int main()
{
	Complex A(3, 4), B(5, -6);
	A.print();
	B.print();
	Complex C;
	C = A + B;
	C.print();
	++A;
	cout << endl;
	A.print();
	C = ++A;
	C.print();

	A++;
	A.print();
	return 0;
}
