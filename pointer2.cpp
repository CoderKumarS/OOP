#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *ptr1;
    int *ptr2;
    ptr1=&x;
    ptr2=ptr1;
    *ptr2=*ptr1;
    cout<<"value of x is: "<<x;
    cout<<"\nvalue of ptr1 is: "<<ptr1;
    cout<<"\nvalue of ptr2 is: "<< ptr2;
    cout<<"\nvalue at address which ptr1 point to : "<< *ptr1;
    cout<<"\nvalue at address which ptr2 point to : "<< *ptr2;
    return 0;
}
