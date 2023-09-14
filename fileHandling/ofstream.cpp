#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream of("result.txt");
    of<<"HEllo";
    of.close();
    cout<<"Data Saved"<<endl;
    return 0;
}