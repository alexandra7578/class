
#include <iostream>

using namespace std;
class big_int
{
private:
    int sign; // -1 daca numarul este negativ, +1 daca este pozitiv
    string digits; // cifrele numarului, stocate in ordine inversa
public:
    big_int()
    {
        // initializare implicita cu 0
    }
    big_int(string s)
    {
        // initializare prin intermediul unui sir de caractere
    }
    big_int(int n)
    {
        // initializare prin intermediul unui numar intre -2^31 si 2^31 - 1
    }
    operator string() const
    {
        // conversie la sir de caractere
    }
    friend bool operator == (const big_int& a, const big_int& b)
    {
        // comparator ==
    }
    friend bool operator < (const big_int& a, const big_int& b)
    {
        return a < b;
    }
    big_int abs() const
    {
        // valoarea absoluta
    }
    big_int operator - () const
    {
        // opusul (inversul in raport cu adunarea)
    }
    big_int operator + (const big_int& b) const
    {
        // suma a 2 numere
    }
    big_int operator - (const big_int& b) const
    {
        // diferenta a 2 numere
    }
    big_int operator * (const big_int& b) const
    {
        // produsul a 2 numere
    }
    big_int operator / (const big_int& b) const
    {
        // catul impartirii a 2 numere
    }
    big_int operator % (const big_int& b) const
    {
        // restul impartirii a 2 numere pozitive
    }
    friend istream& operator >> (istream& in, big_int& n)
    {
        // citire prin intermediul stream-urilor
    }
    friend ostream& operator << (ostream& out, const big_int& n)
    {
        // scriere prin intermediul stream-urilor
    }
};

int main()
{
    big_int a = 96, b("420");
    cin >> a >> b;
    cout << a + b << "\n";
    cout << -a + b << "\n";
    cout << a - b << "\n";
    cout << a * b << "\n";
    cout << a / b << "\n";
    cout << a.abs() % b.abs() << "\n";
    if (a < b)
        cout << "a < b\n";
    else if (a == b)
        cout << "a = b\n";
    else cout << "a > b\n";

    return 0;
}