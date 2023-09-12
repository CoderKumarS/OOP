#include<iostream>
using namespace std;
class counter
{
private:
    int id;
public:
    counter(int i);
    ~counter();
};

counter::counter(int i)
{
    id=i;
    cout<<"Constructor of object with id is "<<id<<endl;
}

counter::~counter()
{
    cout<<"Destructor with id is "<<id<<endl;
}

int main(){
    counter c1(1);
    counter c2(2);
    counter c3(3);
    cout<<"\nend of main \n";
    return 0;
}