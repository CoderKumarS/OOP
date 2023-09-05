// program for full pyramid
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int space, row;
    cout << "Enter number of rows : ";
    cin >> row;
    for (int i = 1, k = 0; i <= row; ++i, k=0)
    {
        for (space = 1; space <= row - i; ++space)
        {
            cout << " ";
        }
        while (k != 2 * i - 1)
        {
            cout << "*";
            ++k;
        }
        cout<<endl;
    }

    return 0;
}
