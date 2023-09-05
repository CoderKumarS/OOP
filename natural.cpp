// Natural Number
#include <iostream>
using namespace std;
main()
{
    int n;
    int sum = 0;
    cout << "enter the value =";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << " the sum is" << sum;
    return 0;
}
