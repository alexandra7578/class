#include <iostream>
using namespace std;

class complex {
	int re, im;
public:
	void get()
	{
		cout << "Enter real part: ";
		cin >> re;
		cout << "Enter img. part: ";
		cin >> im;
	}
	void disp()
	{
		cout << re << "+" << im << "i"<<endl;
	}
	void suma(complex, complex);
};

void complex::suma(complex c1, complex c2)
{
	re = c1.re + c2.re;
	im = c1.im + c2.im;
}
int main()
{
	complex c1, c2, c3;
	cout << "Enter 1 st complex no: ";
	c1.get();
	cout << "Enter 2nd complex no: ";
	c2.get();
	cout << "The 1st complex no. is: ";
	c1.disp();
	cout << "The 2nd complex no. is: ";
	c2.disp();
	c3.suma(c1, c2);
	cout << "The sum of two complex no is: ";
	c3.disp();
}

