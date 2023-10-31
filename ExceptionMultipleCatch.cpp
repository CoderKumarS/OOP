#include <iostream>
#include <bits\stdc++.h>
using namespace std;
void Test(int x)
{
    try
    {
        if (x == 1)
            throw x; // int
        else if (x == 0)
            throw 'x'; // char
        else if (x == -1)
            throw 1.0; // double
        cout << "End of try Block" << endl;
    }
    catch (char c)
    {
        cout << "caught a character" << endl;
    }
    catch (int m)
    {
        cout << "caught an integer" << endl;
    }
    catch (double d)
    {
        cout << "caught a double" << endl;
    }
    cout << "End of try-catch system" << endl;
}
int main()
{
    cout << "Testing multiple catches" << endl;
    cout << "x==1" << endl;
    Test(1);
    cout << "x==0" << endl;
    Test(0);
    cout << "x==-1" << endl;
    Test(-1);
    cout << "x==2" << endl;
    Test(2); // does not throw any exception
    return 0;
}