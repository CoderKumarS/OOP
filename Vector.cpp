#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1(10);

    cout << "Size is\t" << v1.size() << "\n";
    for (int i = 0; i <= 9; i++)
    {
        v1[i] = i;
    }
    vector<int>::iterator i = v1.begin();
    i = i + 3;
    v1.insert(i, 100);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << "\t";
    }
    cout << endl;

    v1.erase(v1.begin() + 1, v1.begin() + 5);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << "\t";
    }
    cout << endl;
    cout << "Size is " << v1.size() << endl;
    v1.clear();
    cout << "Size is " << v1.size() << endl;
    return 0;
}
