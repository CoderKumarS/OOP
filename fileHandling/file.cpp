#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream op;
    op.open("K22EL(2).txt"/*, ios::out|ios::in*/);
    op<<"Hello world I am batch K22EL";
    // cout<<op.tellg()<<endl;
    cout<<op.tellp()<<endl;
    // op.seekp(4,ios::beg);
    // op.seekp(4,ios::cur);
    op.seekp(-4,ios::end);
    cout<<op.tellp()<<endl;
    op.close();
    return 0;
}