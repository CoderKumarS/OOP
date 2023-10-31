#include<iostream>
#include<bits\stdc++.h>
using namespace std;
class self{
    public:
    void show(){
        cout<<"Hello World";
    }
};
int main(){
    self *ptr;
    self obj;
    ptr=&obj;
    ptr->show();
   return 0;
}