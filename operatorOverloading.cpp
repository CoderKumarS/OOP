// You are using GCC
#include<iostream>
using namespace std;
class abc{
    private:
    int x;
    int y;
    int z;
    public:
    abc(int a, int b, int c){
        x = a;
        y = b;
        z = c;
    }
    void display(){
        cout<<"s : ";
        cout<<x<<" ";
        cout<<y<<" ";
        cout<<z<<endl;
    }
    void operator-(){
        x = -x;
        y = -y;
        z = -z;
    }
};
int main(){
    abc s(10, -20, 30);
    s.display();
    -s;
    s.display();
    return 0;
}