// You are using GCC
#include<iostream>
using namespace std;
class point{
    private:
    int x;
    int y;
    public:
    point(){
        x = 0;
        y = 0;
    }
    point(int a, int b){
        x = a;
        y = b;
    }
    point operator-();
    void display(){
        cout<<"s : ";
        cout<<x<<" ";
        cout<<y<<" ";
    }
};
    //Operator -operator for point class
point point::operator-(){
    x = -x;
    y = -y;
}
int main(){
    point o1(10, -20);
    -o1;//negate the object
    o1.display();
    // return 0;
}