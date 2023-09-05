#include<iostream>
using namespace std;
int main()
{
    int myNum=10;
    int *ptr;
    ptr=&myNum;//pointer ptr is pointing to the address of myNum
    cout<<"Address of myNum: "<<ptr;//Adress of myNum will be printed
    cout<<"\nValue stored at ptr: "<<*ptr;
    //value stored at the adress contained by ptr i.e. 10 will be printed
    return 0;
}
