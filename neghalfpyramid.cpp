//print a negative half pyramid
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for (int i = 5; i <= 10; i--)
    {
        for (int j = 5; j <= i; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
