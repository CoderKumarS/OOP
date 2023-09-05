//using largest number
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enetr the value"<<endl;
    cin>>n1;
    cout<<"Enetr the value"<<endl;
    cin>>n2;
    cout<<"Enetr the value"<<endl;
    cin>>n3;
    if(n1>n2&&n1>n3)
    {
        cout<<"the largest number1 =" <<n1<<endl;
    }
    else if (n2>n1&&n2>n3)
    
    {
        cout<<"the largest number2 ="<<n2<<endl;
    }else if( n3>n2&&n3>n2)
    {
        cout<<"the largest number3 ="<<n3<<endl;
    }
    return 0;
    }