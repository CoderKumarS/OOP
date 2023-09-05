#include<iostream>
using namespace std;
int nSquare(int n){
    if(n==0){
        return 0;
    }else{
        return (n+nSquare(n-1));
    }
}
int main(){
    int n;
    cin>>n;
    int result=nSquare(n);
    cout<<result;
    return 0;
}