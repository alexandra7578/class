#include <iostream>
using namespace std;
class Bank {
private:
	float p, r, t, si, amount;
public:
	void read()
	{
		cout << "Enter Principle Amount: ";
		cin >> p;
		cout << "\n Enter Rate of Interest";
		cin >> r;
		cout << "\n Enter Number of year: ";
		cin >> t;
		si = (p * r * t) / 100;
		amount = si + p;
	}
	void show()
	{
		cout << "\n Entered Details are: \n";
		cout << "Principle Amount: " << p << endl;
		cout << "Rate of Interest: " << r << endl;
		cout << "Number of year: " << t << endl;
		cout << "Interest: " << si;
		cout << "Total Amount: " << amount << endl;
	}
};
int main()
{
	Bank b;
	b.read();
	b.show();
	return 0;
}