// to find factorial of a number
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int i = 1;
    while (n > 0)
    {
        i = n * i;
        n--;
    }
    cout << "The factorial of the number " << n << "is " << i;
    return 0;
}
