// local and global variable
#include <iostream>
using namespace std;
class item
{
    int number;
    float cost;

public:
    void getdata(int a, float b);
    void putdata(void)
    {
        cout << "Number: " << number << "\n";
        cout << "Cost: " << cost << "\n";
    }
};

void item::getdata(int a, float b)
{
    number = a;
    cost = b;
}
int main(int argc, char const *argv[])
{
    item x;
    cout << "\nObject X "
         << "\n";
    x.getdata(100, 299.95);
    x.putdata();
    item y;
    cout << "\nObject Y "
         << "\n";
    y.getdata(200, 175.50);
    y.putdata();
    return 0;
}
