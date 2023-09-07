#include<iostream>
using namespace std;
int main(){
    // int a[2] [2]={{1,2},{3,4}};
    int a[2] [2];
    // 2. Input of 2d array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>a[i][j];
        }
    }
    // 2. Output of 2d array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<a[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}