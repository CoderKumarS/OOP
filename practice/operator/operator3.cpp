// You are using GCC
#include<iostream>
using namespace std;
class check{
    public:
    int num1;
    void balance(int bal){
        num1-=bal;
    }
    check(int num1):num1(num1){}
    operator int(){
        return num1;
    }
};
int main(){
    int num1,num2;
    cin>>num1>>num2;
    check c(num1);
    c.balance(num2);
    int num3=c;
    cout<<num3;
    return 0;
}
