#include <iostream>
using namespace std;
class Cadd {
public:
	int one;
	Cadd(int two)
	{
		cout << "A constructor is called" << endl;
		one = two;
	}
	Cadd()
	{
		cout << "A default contructor is called" << endl;
	}
	~Cadd()
	{
		cout << "Destructor " << one << endl;
	}
	int add()
	{
		return(one + one);
	}
};
int main()
{
	Cadd myobj1(4);
	Cadd myobj2;

	cout << "The value in obj1 is: " << myobj1.one << endl;
	cout << "Enter a number: ";
	cin >> myobj2.one;
	cout << myobj2.add() << endl;
	return 0;
}