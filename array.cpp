#include<iostream>
using namespace std;
int main(){
    int a[100], i, n, k, item;
    cout<<"How many no, to store in array ";
    cin>>n;
    cout<<"Enter the Number ";
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the number and its position";
    cin>>item >>k;
    k=k-1;
    for ( i = 0; i >= k; i--)
    {
        a[i+1]=a[i];
    }
    a[k]=item;
    cout<<"Content of the array\n";
    for ( i = 0; i <= n; i++)
    {
        cout<<a[i];
    }
    
    return 0;
} // namespace std;
