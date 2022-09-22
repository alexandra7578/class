#include <iostream>
using namespace std;
class e_bill {
private:
	int c_no;
	char c_name[20];
	int units;
	double bill;
public:
	void get()
	{
		cout << "Enter details of customer below:\n" << endl;
		cout << "Enter Customer No.: ";
		cin >> c_no;
		cout << "\n Enter customer name: ";
		cin >> c_name;
		cout << "\n Enter No. of Units used: ";
		cin >> units;
	}
	void put()
	{
		cout << "\n Entered Details of customer are: " << endl;
		cout << "\n Customer No. is: " << c_no;
		cout << "\n Number of units consumed: " << units;
		cout << "\n Bill of customer: " << bill;
	}
	void calc_bill()
	{
		if (units <= 100)
			bill = units * 1.20;
		else
			if (units <= 300)
				bill = 100 * 1.20 + (units - 100) * 2;
			else
				bill = 100 * 1.20 + 200 * 2 + (units - 300) * 3;
	}
};
int main()
{
	e_bill b1;
	b1.get();
	b1.calc_bill();
	b1.put();
	cout << endl;
	return 0;
}