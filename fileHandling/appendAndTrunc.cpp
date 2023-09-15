#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream op;
    op.open("K22EL.txt");
    op << "Hello World" << endl;
    op.close();
    op.open("K22EL.txt", ios::app);
    op << "I am batch K22EL" << endl;
    op.open("K22EL.txt", ios::app);
    op.close();
    op.open("K22EL.txt", ios::trunc);
    op.close();
}