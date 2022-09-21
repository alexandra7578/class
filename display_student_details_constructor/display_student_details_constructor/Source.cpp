#include <iostream>
using namespace std;
class stu {
private:
	char name[20], add[20];
	int roll, zip;
public:
	stu();
	~stu();
	void read();
	void disp();
};
stu::stu()
{
	cout << "This is student details constructor called.........\n";
}

void stu::read()
{
	cout << "Enter the student Name: ";
	cin >> name;
	cout << "Eter the student roll no: ";
	cin >> roll;
	cout << "Enter the student adress: ";
	cin >> add;
	cout << "Enter the Zipcode: ";
	cin >> zip;
}

void stu::disp()
{
	cout << "The entered student details are shown below:--------\n";
	cout << "Student name: " << name << endl;
	cout << "Roll no is: " << roll << endl;
	cout << "Adress is: " << add << endl;
	cout << "zipcode is: " << zip<<endl;
}
stu::~stu()
{
	cout << "Student detail is closed..........\n";
}

int main()
{
	stu s;
	s.read();
	s.disp();
	return 0;
}