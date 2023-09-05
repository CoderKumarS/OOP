#include<iostream>
#include<string.h>
using namespace std;
class student1
{
public:
    static int objectCount;
    student1(){
        objectCount++;
    }
};
int student1::objectCount=0;

int main(){
    student1 s1;
    student1 s2;
    student1 s3;
    cout<<"Total objects created= "<<student1::objectCount<<endl;
    return 0;
}