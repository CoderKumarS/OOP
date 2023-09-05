#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 10;
    int *p;
    int **pp;
    p = &a;                                // pointer p is pointing to address of a
    pp = &p;                               // pointer pp is a double pointer pointing to the address of pointer p
    cout << "Address of a: " << p << endl; // address of p will be printed
    cout << "Address of p: " << pp << endl;
    cout << "Value stored at p: " << *p << endl; // value stored at the address
    cout << "Value stored at pp: " << *pp << endl;
    cout << "Value stored at pp: " << **pp << endl; // value stored at the address contained by the pointer stored at pp
    return 0;
}
