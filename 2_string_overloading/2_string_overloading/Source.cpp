#include <iostream>
#include <string>
using namespace std;

class String {
	char str[20];
public:
	void getdata()
	{
		int l = strlen(str);
		cin.getline(str, l);
	}
	int operator ==(String s)
	{
		if (!strcmp(str, s.str))
			return 1;
		return 0;
	}
};

int main()
{
	String s1, s2;
	cout << "Enter first string :: ";
	s1.getdata();
	cout << "Enter second string :: ";
	s2.getdata();
	if (s1 == s2)
		cout << "Strings are equal";
	else
		cout << "String are not equal";
}