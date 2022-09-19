#include <iostream>
using namespace std;

class biggest {
private:
	int a, b;
public:
	void input();
	void display();
};

void biggest::input()
{
	cout << "Enter 2 nos: ";
	cin >> a;
	cin >> b;
}

void biggest::display()
{
	if (a > b)
		cout << "Biggest no: " << a;
	else
		cout << "Biggest no: " << b;
}
int main()
{
	biggest b;
	b.input();
	b.display();
}
