#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, width;

public:
    Rectangle(int a, int b)
    {
        length = a;
        width = b;
    }
    int area()
    {
        int area = (length * width);
        cout << "Area is : " << area;
    }
};

int main()
{
    Rectangle r(6,6);
    r.area();
    return 0;
}