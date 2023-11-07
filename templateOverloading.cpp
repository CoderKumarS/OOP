#include<iostream>
using namespace std;
template<class T>
void display(T x){
    cout<<"Template display:"<<x<<"\n";
}
template<class T1, class T2, class T3>
void display(T1 x, T2 y, T3 z){
    cout<<"Template dispaly: "<<x<<" "<<y<<" "<<z<<"\n";
}
void display(int x){
    cout<<"Explicit dispaly: "<<x<<"\n";
}
void display(char y){
    cout<<"Explicit dispaly: "<<y<<"\n";
}
int main(){
    display(100);
    display(56.78);
    display('a');
    display(5.98,'a',89);
    // display(5.98,6.98);
    return 0;
}