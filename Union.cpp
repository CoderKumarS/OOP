#include <iostream>
using namespace std;
union Data
{
    int intValue;
    float floatValue;
    char charValue;
};

int main()
{
    Data myData;

    myData.intValue = 42;
    cout << "Integer value: " << myData.intValue << endl;

    myData.floatValue = 3.14f;
    cout << "Float value: " << myData.floatValue << endl;

    myData.charValue = 'A';
    cout << "Char value: " << myData.charValue << endl;
    return 0;
}
