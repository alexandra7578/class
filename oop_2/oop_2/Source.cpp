#include<iostream>
class Tablou
{
public:
    int* t; // tabloul unidimensional
    int n;// dimensiunea fizica si logica tabloului
    int val;
    // constructorul
    Tablou(int dim, int a, int b, int c, int d)
    {
        n = dim;
        t = new int[n];
        t[0] = a;
        for (int i = 1; i < n; i++)
            t[i] = 1 + (t[i - 1] * b + c) % d;
    }
    // destructorul
    ~Tablou()
    {
        n = 0;
        delete[] t;
    }
    // returneaza maximul din t
    int Max()
    {
        int maxi = -1000;
        for (int i = 0; i < n; i++)
            if (maxi < t[i])
                maxi = t[i];
        return maxi;
    }
    // returneaza prima pozitie unde se gaseste val in t,
    // sau returneaza -1 daca val nu apare in t
    int Cauta(int val)
    {
        for (int i = 0; i < n; i++)
            if (t[i] == val)
                return i;
        return -1;
    }
};
int main()
{
    int n, a, b, c, d, valoare;
    std::cin>>n>> a >> b >> c >> d;
    Tablou(n, a, b, c, d);
    Tablou Max();
    std::cin >> valoare;
    Tablou Cauta(valoare);
}