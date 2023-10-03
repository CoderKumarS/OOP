#include <iostream>
using namespace std;
class B
{
    int a; // private not inherited
public:
    int b; // ready to inherited
    void get_ab();
    int get_a();
    void show_a();
};
class D : public B // public derivation
{
    int c;

public:
    void mul(void);
    void display(void);
};
void B::get_ab(void)
{
    a = 5;
    b = 10;
}
int B::get_a()
{
    return a;
}
void B ::show_a()
{
    cout << "a= " << a << endl;
}
void D::display()
{
    cout << "a= " << get_a() << endl;
    cout << "b= " << b << endl;
    cout << "c= " << c << endl;
}
void D::mul(){
    c=b*get_a();
}
int main()
{
    D d; // object of class D is created.
    d.get_ab();
    d.mul();
    d.show_a();
    d.display();
    d.b = 20;
    d.mul();
    d.display();
    return 0;
}