#include <iostream>
using namespace std;

class date {
private:
	int dd, mm, yy;
public:
	void input();
	void display();
};

void date::input()
{
	cout << "Enter year: ";
	cin >> yy;
	cout << "Enter month: ";
	cin >> mm;
	cout << "Enter day: ";
	cin >> dd;
}

void date::display()
{
	cout << "Today's day is dd/mm/yy format: " << dd << "/" << mm << "/" << yy;
}
int main()
{
	date d;
	d.input();
	d.display();
}
