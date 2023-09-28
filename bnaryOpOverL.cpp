// You are using GCC
#include<iostream>
using namespace std;
class sum{
    public:
    int a;
    int b;
    sum(){//constructor
        b = 50;
    }
    void set_data(){
        cout<<"Enter a : ";
        cin>>a;
        cout<<endl;
        cout<<"A is : "<<a;
        cout<<endl;
    }
    int operator+(sum s1){
        return(a+s1.b);
    }
};
int main(){
    int d;
    sum s,t;
    s.set_data();
    d=s+t;
    cout<<"Sum is : "<<d;
}