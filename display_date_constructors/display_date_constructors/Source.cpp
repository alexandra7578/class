#include <iostream>
using namespace std;

class date {
private:
	int dd, mm, yy;
public:
	date()
	{
		dd = 31;
		mm = 12;
		yy = 2022;
		cout << "Date Object has benn created.............\n";
	}
	void display()
	{
		cout << "The Entered Date is:: ";
		cout << dd << "-" << mm << "-" << yy << endl;
	}
};
int main()
{
	date date1;
	date1.display();
	return 0;
}