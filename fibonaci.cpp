#include <iostream>
using namespace std;
int main()
{
    int num;
    int num1 = 0, num2 = 1, nextTerm;
    cout << "Enter the number";
    cin >> num;

    for (int i = 1; i < num; i++)
    {
        if (i == 1)
        {
            cout << num1 << ",";
            continue;
        }
        if (i == 2)
        {
            cout << num2 << ",";
            continue;
        }
        nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;
        cout << nextTerm << ",";
    }

    // mycreation
    // cout<<num1<<endl<<num2<<endl;
    // for (int i = 1; i < num; i++)
    // {
    //     nextTerm=num1+num2;
    //     num1=num2;
    //     num2=nextTerm;
    //     cout<<nextTerm<<endl;
    // }

    return 0;
}
