#include <iostream>
using namespace std;
class CrectArea {
private:
	int lenght;
	int breadth;
public:
	CrectArea(int, int);
	int areaofrect()
	{
		return (lenght * breadth);
	}
	int lenght1()
	{
		return lenght;
	}
	int breadth1()
	{
		return breadth;
	}
};

CrectArea::CrectArea(int x, int y)
{
	lenght = x;
	breadth = y;
}
int main()
{
	CrectArea myrectangle(2, 2);

	cout << "The lenght of rectangle " << myrectangle.lenght1() << endl;
	cout << "The breadth of rectangle " << myrectangle.breadth1() << endl;
	cout << "The area of reactangle " << myrectangle.areaofrect();
}
