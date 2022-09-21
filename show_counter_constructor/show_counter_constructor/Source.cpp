#include <iostream>
using namespace std;

class counter {
private:
	int count;
public:
	counter()
	{
		count = 0;
	}
	void inc_count()
	{
		count++;
	}
	int get_count()
	{
		return count;
	}
};
int main()
{
	counter c1;
	cout << "Before calling Counter Function, Count= ";
	cout<< c1.get_count();
	c1.inc_count();
	cout << "\n After calling Count Function, Count= ";
	cout << c1.get_count();
	cout << endl;
	return 0;
}