#include <iostream>
using namespace std;
class M
{
protected:
    int m;

public:
    void get_m(int);
};
class N
{
protected:
    int n;

public:
    void get_n(int);
};
class P : public M, public N
{
public:
    void display(void);
};
void M::get_m(int x)
{
    m = x;
}
void N ::get_n(int y)
{
    n = y;
}
void P ::display(void)
{
    cout << "m = " << m << endl;
    cout << "n = " << n << endl;
    cout << "m*n = " << m * n << endl;
}
int main()
{
    P p;
    p.get_m(10); // m=10
    p.get_n(20); // n=20
    p.display(); // m*n=200
    return 0;
}