#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {12, 3, 17, 8};
    vector<int> v(arr, arr + 4);
    sort(v.begin(), v.end());
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}