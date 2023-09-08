#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, width;

public:
    Rectangle()
    {
        length = 5;
        width = 6;
    }
    int area()
    {
        int area = (length * width);
        cout << "Area is : " << area;
    }
};

int main()
{
    Rectangle r;
    r.area();
    return 0;
}