#include<iostream>
using namespace std;
class complex
{
public:
    int x,y;
    complex();
    complex(int a, int b);
    // friend operator+(complex , complex );
    void show(){
        cout<<x<<" + "<<y<<"i"<<endl;
    }
};

complex::complex()
{
    x=0;
    y=0;
}
complex::complex(int a, int b)
{
    x=a;
    y=b;
}
complex operator+(complex s1, complex s2){
    complex temp;
    temp.x =s1.x+s2.x;
    temp.y =s1.y+s2.y;
    return  temp;
}
int main(){
    complex c1(2,3), c2(4,5), c3;
    c1.show();
    c2.show();
    c3.show();
    c3 = c1+c2;
    c3.show();
    return 0;
}