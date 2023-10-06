#include <iostream>
using namespace std;
class A
{
    int x;

public:
    A(int a)
    // A()
    {
        x = a;
        // cout << "\nCalling a default bse class constructor " << x;
        // cout << "\nCalling a default bse class constructor ";
    }
    ~A()
    {
        cout << "\nCalling base class destructor A";
    }
};
class B : public A
{
    int l;

public:
    B(int p) : A(p)
    // B(int p)
    {
        l = p;
        cout << "\nCalling a default bse class constructor " << l;
    }
    ~B()
    {
        cout << "\nCalling base class destructor B";
    }
};

int main()
{
    B obj1(5);
    return 0;
}