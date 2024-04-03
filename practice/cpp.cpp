#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string n;
    getline(cin,n);
    transform(n.begin(),n.end(),n.begin(),::toupper);
    cout<<n;
}