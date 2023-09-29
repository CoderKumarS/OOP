#include <iostream>
using namespace std;
class ABC
{
public:
    int x;
    ABC() : x(0) {}
    ABC(int a) : x(a) {}
    int operator+(int num)
    {
        cout << x + num;
    }
};

int main()
{
    ABC ob1(5), ob2;
    ob2 = ob1 + 7;     // ob1.operator+(7)
    // ob2 = 7 + ob1;  // it will give you error 7.operator+(ob1)
    return 0;
}