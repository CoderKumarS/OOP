#include<iostream>
using namespace std;
struct emp// structure name
{
    string name;
};
int main()
{
    emp e[5];
    int i;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter the name of the employee no."<<i<<": ";
        cin>>e[i].name;
    }
    cout<<"\nName of all employees: \n";
    for (int i = 0; i < 5; i++)
    {
        cout<<e[i].name<<endl;
    }
    cout<<endl;
    return 0;
}
