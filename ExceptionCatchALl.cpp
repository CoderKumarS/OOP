#include <iostream>
using namespace std;
void Test(int x)
{
    try
    {
        if (x == 1)
            throw x; // int
        if (x == 0)
            throw 'x'; // char
        if (x == -1)
            throw 1.0; // double
        // cout << "End of try Block" << endl;
    }
    catch (...)
    {
        cout << "caught an exception" << endl;
    }
    // cout << "End of try-catch system" << endl;
}
int main()
{
    cout << "Testing generic catches" << endl;
    // cout << "x==1" << endl;
    Test(1);
    // cout << "x==0" << endl;
    Test(0);
    // cout << "x==-1" << endl;
    Test(-1);
    // cout << "x==2" << endl;
    Test(2); // does not throw any exception
    return 0;
}