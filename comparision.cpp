#include<iostream>
using namespace std;
struct comStruct
{
    int intData;
    float floatData;
    double doubleData;
};
union comUnion
{
    int intData;
    float floatData;
    double doubleData;
};
int main()
{
    comStruct a;
    comUnion b;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b);
    return 0;
}
