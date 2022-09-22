#include <iostream>
using namespace std;
class box {
	double length, width, height;
	double volume;
public:
	box(double a, double b, double c);
	void vol();
};

box::box(double a, double b, double c)
{
	length = a;
	width = b;
	height = c;
	volume = length * width * height;
}

void box::vol()
{
	cout << "\n Dimensions of box are: ";
	cout << "\n Length of box: " << length << endl;
	cout << "\n Width of box: " << width << endl;
	cout << "\n Height of box: " << height << endl;
	cout << "\n Volume of box: " << volume << endl;
}
int main()
{
	box x(2.4, 5.7, 2.1), y(3.3, 4.4, 5.5);
	x.vol();
	y.vol();
}
