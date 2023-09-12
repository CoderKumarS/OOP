#include<iostream>
using namespace std;
class counter
{
private:
    int c;
public:
    counter(int a);
    counter(counter &ob);
    void show(){
        cout<<c<<endl;
    }
    ~counter();
};

counter::counter(int a)
{
    c=a;
}
counter::counter(counter &ob)
{
    cout<<"Copy constructor"<<endl;     
    c=ob.c;
}

counter::~counter()
{
}

int main(){
    counter c1(10);
    counter c2(c1);//call copy constructor
    c1.show();
    c2.show();
    return 0;
}