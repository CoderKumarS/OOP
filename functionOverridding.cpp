#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"\n Base Class A";
    }
};
class B:public A{
    public:
    void show(){
        cout<<"\nDerived Class B";
    }
};
int main(){
    B obj1;
    obj1.show();//derived class show() will be called
    // obj1.A::show(); //base class show will be called
    return 0;
}