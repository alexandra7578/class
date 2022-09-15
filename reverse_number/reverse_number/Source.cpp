#include <iostream>
using namespace std;

class rev {
private:
	int n, n1, rn = 0, d;
public:
	void input();
	void calc();
	void display();
};

void rev::input()
{
	cout << "\n Enter any positiv no.: ";
	cin >> n;
}

void rev::calc()
{
	n1 = n;
	while (n1)
	{
		rn = rn * 10 + n1 % 10;
		n1 = n1 / 10;
	}
}

void rev::display()
{
	cout << "\n Reverse of[ " << n1 << "] is: " << rn << endl;
}

int main()
{
	rev r;
	r.input();
	r.calc();
	r.display();

	return 0;
}