#include <iostream>
using namespace std;

class largest {
private:
	int x, y, z;
public:
	void input()
	{
		cout << "\n Enter 1st number :: ";
		cin >> x;
		cout << "\n Enter 2st number :: ";
		cin >> y;
		cout << "\n Enter 3st number :: ";
		cin >> z;
	}
	void calc()
	{
		int r;
		r = ((x > y) && (x > z) ? x : (y > x) && (y > z) ? y : z);
		cout << "\n The largest number amoung [ " << x << "," << y << "," << z << "]=" << r << endl;
	}
};
int main()
{
	largest g;
	g.input();
	g.calc();
	return 0;
}