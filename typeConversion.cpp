// base type to class type
#include <iostream>
using namespace std;
class ABC
{
private:
    int hrs;

public:
    ABC(float t);
    ~ABC();
};

ABC::ABC(float t)
{
    hrs = t / 60;
    cout << hrs;
}

ABC::~ABC()
{
}

int main()
{
    ABC is_object(120.42);
    return 0;
}