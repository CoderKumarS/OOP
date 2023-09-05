#include<iostream>
using namespace std;
class Rectangle{
    private:
    float length;
    float width;
    public:
    Rectangle(float Length, float Width){
        length =Length;
        width = Width;
    }
    int getArea(){
        return length*width;
    }
    int getPerimeter(){
        return 2*(length+width);
    }
    bool isSquare(){
        return true;
    }
};
int main(){
    return 0;
}