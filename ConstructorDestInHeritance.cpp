#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "\nCalling a default bse class constructor A";
    }
    ~A()
    {
        cout << "\nCalling base class destructor A";
    }
};
class B : public A
{
public:
    B()
    {
        cout << "\nCalling a default bse class constructor B";
    }
    ~B()
    {
        cout << "\nCalling base class destructor B";
    }
};

int main()
{
    B obj1;
    return 0;
}