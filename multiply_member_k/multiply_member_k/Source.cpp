#include <iostream>
using namespace std;

class array1{
public:
	int n;
	void readarray();
	void multiply();
};

void array1::readarray()
{
	int a[100];
	cout << "Enter No of elemets u want: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\n Enter [" << i + 1 << "] element: ";
		cin >> a[i];
	}
}

void array1::multiply()
{
	int i, j, a[100], temp[100], k;
	cout << "\n Enter the no. which u want to multiply: ";
	cin >> k;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			temp[i] = a[i] * k;
	}
	cout << "\n After multiply every member by k =[" << k << "], Resultant array is:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\n [ " << i + 1 << "] elemet: " << temp[i] << endl;
	}
}
int main()
{
	array1 mul;
	mul.readarray();
	mul.multiply();
	return 0;
}
