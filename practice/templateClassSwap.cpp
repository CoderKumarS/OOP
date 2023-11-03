#include <iostream>
using namespace std;
template <class T>
void swapNumber(T &x1, T &y2)
{
    T temp=x1;
    x1=y2;
    y2=temp;
}
// T swapNum(T &x, T &y)
// {
//     x=x+y;
//     y=x-y;
//     x=x-y;
// }
int main()
{
    int num1, num2;
    cout<<"Enter integer Value: ";
    cin>>num1>>num2;
    swapNumber<int>(num1,num2);
    // swapNum<int>(num1,num2);
    cout << "\nnum1 "<<num1<<" num2 "<<num2;
    float num3, num4;
    cout<<"\nEnter float Value: ";
    cin>>num3>>num4;
    // swapNum<float>(num3,num4);
    swapNumber<float>(num3,num4);
    cout << "\nnum3 "<<num3<<" num4 "<<num4;
    return 0;
}