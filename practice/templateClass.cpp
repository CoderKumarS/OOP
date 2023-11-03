#include <iostream>
using namespace std;
template <class T>
T minNum(T x, T y)
{
    return (x < y ? x : y);
}
int main()
{
    int num1, num2;
    cout<<"Enter integer Value: ";
    cin>>num1>>num2;
    cout << "\nMin value " << minNum<int>(num1, num2);
    float num3, num4;
    cout<<"Enter float Value: ";
    cin>>num1>>num2;
    cout << "\nMin value " << minNum<float>(num1, num2);
    return 0;
}