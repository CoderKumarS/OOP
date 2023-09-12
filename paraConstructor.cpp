#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length, breadth;
public:
    Rectangle(int a, int b);
    int area(){
        int a =(length*breadth);
        cout<<"Area is: "<<a;
    }
};

Rectangle::Rectangle(int a, int b)
{
    length = a;
    breadth = b;
}
int main(){
    Rectangle r1(5,6);
    r1.area();
    return 0;
}