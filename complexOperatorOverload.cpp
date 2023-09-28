// You are using GCC
#include<iostream>
using namespace std;
class complex{
    int x, y;
    public:
    complex(){
        x = 10;
        y = 20;
    }
    complex(int a, int b){
        x = a;
        y = b;
    }
    complex operator+(complex c){
        complex temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        return temp;
    }
    void show(){
        cout<<x<<"+i"<<y;
    }
};
int main(){
    complex c1(2,3),c2(4,5),c3;
    c3=c1+c2;
    cout<<c3;
}