#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle(int a, int b):length(a),breadth(b){}
    int area()
    {
        return(length * breadth);
    }
};

int main()
{
    Rectangle r1(5, 6);
    cout<<"Area is: "<<r1.area();
    return 0;
}