#include <iostream>
using namespace std;

class student {
protected:
	int roll_no;
public:
	void get_no(int x)
	{
		roll_no = x;
	}
	void put_no()
	{
		cout << "\n Roll number:: " << roll_no << endl;
	}
};

class test: virtual public student {
protected:
	float sub_mark;
public:
	void get_submark(float y)
	{
		sub_mark = y;
	}
	void put_submark()
	{
		cout << "\n Subject Marks: " << sub_mark;
	}
};

class sport : virtual public  student {
protected:
	float sp_mark;
public:
	void get_spmark(float z)
	{
		sp_mark = z;
	}
	void put_spmarks()
	{
		cout << "\n Sport Mraks: " << sp_mark<<endl;
	}
};

class result : public test, public sport
{
	float total_mark;
public:
	void put_results()
	{
		total_mark = sub_mark + sp_mark;
		put_no();

		put_submark();
		put_spmarks();
		cout << "\n Total Marks: " << total_mark<<endl;
	}
};
int main()
{
	result R;
	R.get_no(34);
	R.get_submark(67.2);
	R.get_spmark(98.9);
	R.put_results();

}