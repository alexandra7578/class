#include <iostream>
class A
{
public:
    int a, b;
    // constructor
    A(int _a, int _b)
    {
        a = _a; b = _b;
    }
    // functie membra: returneaza suma dintre a si b
    int Suma()
    {
        return a + b;
    }
};

int main()
{
    int a, b;
    std::cin >> a >> b;
    A A(a, b);
    std::cout<<A.Suma();

}