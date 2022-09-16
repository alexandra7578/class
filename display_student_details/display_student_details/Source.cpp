#include <iostream>
using namespace std;

class student {
private:
	char name[20], regd[10], branch[10];
	int sem;
public:
	void input();
	void display();
};

void student::input()
{
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter regdno: ";
	cin >> regd;
	cout << "Enter branch: ";
	cin >> branch;
	cout << "Enter sem:";
	cin >> sem;
}

void student::display()
{
	cout << "\n Name:"<<name;
	cout << "\n Regdno:" << regd;
	cout << "\n Branch" << branch;
	cout << "\n Semn:" << sem;
}
int main()
{
	student s;
	s.input();
	s.display();
}
