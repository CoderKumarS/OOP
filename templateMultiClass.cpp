#include <iostream>
using namespace std;
template <class T1, class T2>
void multiply(T1 num1, T2 num2)
{
    cout << "Product of numbers is: " << num1 * num2 << endl;
}
int main()
{
    int num1 = 3;
    float num2 = 4.5;
    float num3 = 7.8;
    int num4 = 3;
    multiply<int, float>(num1, num2);
    multiply<int, int>(2, 2);
    multiply<float, int>(num3, num4);
    multiply<float, float>(2.3, 4.5);
    return 0;
}