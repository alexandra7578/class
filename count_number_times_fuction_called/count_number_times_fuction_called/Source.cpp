#include <iostream>
using namespace std;

class square {
private:
	int n, r;
	float n1, r1;
	static int b;
public:
	void input();
	void clac();
	void display();
};
int square::b = 0;

void square::input()
{
	cout << "Enter an integer:";
	cin >> n;
	cout << "Enter a float no:";
	cin >> n1;
	b++;
}

void square::clac()
{
	r = n * n;
	r1 = n1 * n1;
	b++;
}

void square::display()
{
	cout << "Square of integre: " << r << endl;
	cout << "Square of float: " << r1 << endl;
	cout << "Function is called " << b << endl;
}
int main()
{
	square s;
	s.input();
	s.clac();
	s.display();

}