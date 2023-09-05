me
#include <iostream>
using namespace std;
int main()
{
    int num, num2 = 0, temp, r;
    cout << "Enter the number : ";
    cin >> num;
    temp = num;
    while (num > 0)
    {
        r = num % 10;
        num2 = (num2 * 10) + r;
        num /= 10;
    }
    if (temp == num2)
    {
        cout << "number is palindrome";
    }
    else
    {
        cout << "number is not a palindrome";
    }
    return 0;
}