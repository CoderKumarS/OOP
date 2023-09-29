// class type to base type
//  casting function
//  1. It doesn't have any arguments or parameter
//  2. It doesn't have any return data type
//  3. It should be the member of the class

#include <iostream>
using namespace std;
class Student
{
private:
    int rollNo;
    float marks;

public:
    Student(int a, float b);
    ~Student();
    operator int()
    {
        return rollNo;
    }
    operator float()
    {
        return marks;
    }
};

Student::Student(int a, float b)
{
    rollNo = a;
    marks = b;
}

Student::~Student()
{
}

int main()
{
    Student s(4, 70.4236);
    int r;
    float m;
    r = s;
    m = s;
    cout << "Roll No. " << r << endl;
    cout << "Marks " << m << endl;
    return 0;
}