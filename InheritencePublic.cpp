#include <iostream>
#include <string.h>
using namespace std;
class student
{
private:
    int roll_no;

protected:
    char section[10];

public:
    void get_rno()
    {
        cout << "\n Enter the roll mnumber: ";
        cin >> roll_no;
    }
    void show_rno()
    {
        cout << "Roll number is " << roll_no;
    }
};
class result : public student
{
private:
    float fees;

public:
    void get_data()
    {
        get_rno();
        cout << "\nEnter fees:";
        cin >> fees;
        cout << "\n Enter section:";
        cin >> section;
    }
    void display()
    {
        show_rno();
        cout << endl
             << "Fees: " << fees << endl
             << "Section: " << section;
    }
};
int main()
{
    result obj1;
    obj1.get_data();
    obj1.display();
    /*
    obj1.get_rno(); //possible--public
    obj1.show_rno(); // possible--public
    strcpy(obj1.section,"K17TY";) //Not possible--protected
    */
    return 0;
}