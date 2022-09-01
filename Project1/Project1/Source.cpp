#include <iostream>
using std::string;
class AbsreactEmployee {
	virtual void AskForPromotion()=0;
};


class Employee:AbsreactEmployee {
protected:
	string Name;
private:
	string Company;
	int Age;
public:
	void setName(string name) {
		Name = name;
	}
	string getName() {
		return Name;
	}
	void setCompany(string company)
	{
		Company = company;
	}
	string getcompany() {
		return Company;
	}
	void setAge(int age) {
		if(age>=18)
		Age = age;
	}
	int getAge() {
		return Age;
	}
	void introduceyourself() {
		std::cout << "Name " << Name << std::endl;
		std::cout << "Company " << Company << std::endl;
		std::cout << "Age " << Age << std::endl;
	}
	Employee(string name, string company, int age) {
		Name = name;
		Company = company;
		Age = age;
	}
	void AskForPromotion() {
		if (Age > 32)
			std::cout << Name << " got promoted!" << std::endl;
		else
			std::cout << Name << " sorry no promotion for you :(" << std::endl;
	}
	virtual void Work() {
		std::cout << Name << " is checking email, task backlog, performing tasks..."<<std::endl;
	}
};
class Developer :public Employee {
public:
	string FavProgLang;
	Developer(string name, string company, int age, string favProgLang):Employee(name, company, age){
		FavProgLang = favProgLang;
	}
	void FixBug() {
		std::cout << getName() << " fixed bug using " << FavProgLang << std::endl;
	}
	void Work() {
		std::cout << Name << " is writting " <<FavProgLang<< std::endl;
	}
};
class Teacher:public Employee {
public:
	string Subject;
	void PrepareLasson() {
		std::cout << Name << " is preparing " << Subject << " lesson " << std::endl;
	}
	Teacher(string name, string company, int age, string subject) :Employee(name, company, age) {
		Subject = subject;
	}
	void Work() {
		std::cout << Name << " is teaching "<<Subject << std::endl;
	}
};
int main()
{
	Developer d=Developer("Alexandra", "YouTube",  25, "C++");
	Teacher t=Teacher("Jack", "Cool School", 35, "History");
	Employee* e=&d;
	Employee* e2 = &t;
	e->Work();
	e2->Work();
}