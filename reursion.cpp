#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int rec(int);
    int n, fact;
    cout << "Enter the number: " << endl;
    cin >> n;
    fact = rec(n);
    cout << "Factorial is " << fact;
    return 0;
}
int rec(int a)
{
    int b;
    if (a <= 1)
    {
        return (1);
    }
    else
    {
        b = a * rec(a - 1);
        return (b);
    }
}
