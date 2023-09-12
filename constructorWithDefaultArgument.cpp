#include <iostream>
using namespace std;
class rectangle
{
private:
    int l, b;

public:
    rectangle(int x, int y);
    int area()
    {
        return (l * b);
    }
};

rectangle::rectangle(int x = 12, int y = 34)
{
    l = x;
    b = y;
}
int main()
{
    rectangle r;
    cout << "Area is: " << r.area();
    rectangle r1(45, 67);
    cout << "\nArea is: " << r1.area();
    return 0;
}