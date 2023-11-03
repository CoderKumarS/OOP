#include <iostream>
using namespace std;
#define MAX 5
template <class Type>
Type sum(Type A[])
{
    Type Total = 0;
    for (int i = 0; i < MAX; i++)
        Total += A[i];
    return Total;
}
template <class Type>
void read(Type A[])
{
    for (int i = 0; i < MAX; i++)
        cin >> A[i];
}
int main()
{
    int array[MAX];
    float array1[MAX];
    cout << "\nEnter the integer array elements : ";
    read<int>(array);
    cout << "Sum of elements = " << sum<int>(array);
    
    cout << "\nEnter the integer array elements : ";
    read<float>(array1);
    cout << "Sum of elements = " << sum<float>(array1);
    return 0;
}