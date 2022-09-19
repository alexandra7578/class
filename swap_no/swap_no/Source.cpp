#include <iostream>
using namespace std;

class swap2 {
	int a, b;
public:
	void getdata();
	void swapv();
	void display();
};

void swap2::getdata()
{
	cout << "Enter 2 no:";
	cin >> a >> b;
}

void swap2::swapv()
{
	int aux;
	aux = a;
	a = b;
	b = aux;
}

void swap2::display()
{
	cout << "a=" << a << endl;
	cout << "b=" << b;
}

int main()
{
	swap2 s;
	s.getdata();
	cout << "\n Before swap: \n";
	s.display();

	s.swapv();
	cout << "\nAfter swap:";
	s.display();
}
