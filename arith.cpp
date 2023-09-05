// create a program using arithmetic operator and class
#include <iostream>
using namespace std;
class abc
{
private:
    int x, y;
    int res;

public:
    void getdata()
    {
        cout << "Enter the valuse of x and y : " << endl;
        cin >> x >> y;
    }
    void diff()
    {
        res = x - y;
        cout << "The difference is :" << res << "\n";
    }
    void sum()
    {
        res = x + y;
        cout << "The sum is :" << res << "\n";
    }
    void prod()
    {
        res = x * y;
        cout << "The product is :" << res << "\n";
    }
    void quot()
    {
        res = x / y;
        cout << "The quotient is :" << res;
    }
};
int main(int argc, char const *argv[])
{
    abc obj1;
    obj1.getdata();
    obj1.diff();
    obj1.sum();
    obj1.prod();
    obj1.quot();
    return 0;
}
