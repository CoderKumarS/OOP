#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of a and b " << endl;
    cin >> a;
    cin >> b;
    try
    {
        if (b != 0)
        {
            cout << "Result(a/b)= " << a / b << endl;
        }
        else                // exception detected
        {
            throw(b);      // exception throw
        }
    }
    catch (int i)       // handle the exception
    {
        cout << "Exception caught: b = " << i << endl;
    }
    cout << "End";
    return 0;
}