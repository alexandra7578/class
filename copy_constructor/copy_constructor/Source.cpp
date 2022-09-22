#include <iostream>
#include <string>
using namespace std;
class Book {
private:
	int pages;
	char titlu[3];
public:
	Book(int q, char w[3])
	{
		pages = q;
		for (int i = 0; i < 3; i++)
			titlu[i] = w[i];
	}
	void show()
	{
		cout << "\n Title of Book: " << titlu << endl;
		cout << "No of pages: " << pages << endl;
	}
};
int main()
{
	Book b1(25, "C++");
	Book b2(b1);
	Book b3 = b1;
	cout << "\n Detail of b1: " << endl;
	b1.show();
	cout << "Detail of b2: " << endl;
	b2.show();
	cout << "\n Detail of b3: " << endl;
	b3.show();
	return 0;
}