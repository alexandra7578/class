#include <iostream>
using namespace std;

class cube {
public:
	double side;
	double volum()
	{
		return(side * side * side);
	}
	cube(double side1)
	{
		cout << "\n A constructor is called" << endl;
		side = side1;
	}
	cube()
	{
		cout << "\n A default constructor is called"<<endl;
	}
	~cube()
	{
		cout << "\n Destructing " << side << endl;
	}
};

int main()
{
	cube c1(2.34);
	cube c2;
	cout << "\n The side of a cube is: " << c1.side << endl;
	cout << "\n The volume of the first cub is: " << c1.volum() << endl;
	cout << "\n Enter the length of the second cube: ";
	cin >> c2.side;
	cout << "\n The volum of second cube is: " << c2.volum() << endl;
	return 0;
}