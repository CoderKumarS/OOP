#include<iostream>
using namespace std;
class operation
{
int a,b,add;
public:
    void get(){
        cout<<"Enter first value: ";
        cin>>a;
        cout<<"Enter second value: ";
        cin>>b;
    }
    void sum();
}s;
inline void operation :: sum(){
    add=a+b;
    cout<<"Addition of two numbers: "<<a+b;
}
int main(int argc, char const *argv[])
{
    cout<<"Program using inline function\n";
    s.get();
    s.sum();
    return 0;
}

