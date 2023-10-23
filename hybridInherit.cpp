#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "A\n";
    }
};
class B : public A
{
public:
    B()
    {
        cout << "B\n";
    }
};
class D : public B
{
public:
    D()
    {
        cout << "D\n";
    }
};
class C : public A
{
public:
    C()
    {
        cout << "C\n";
    }
};
class E : public C
{
public:
    E()
    {
        cout << "E\n";
    }
};
class F : public D, public E
{
public:
    F()
    {
        cout << "F\n";
    }
};

int main()
{
    F f;
    return 0;
}