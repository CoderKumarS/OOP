#include <iostream>
#include <list>
using namespace std;
void display(list<int> &l)
{
    list<int>::iterator p;
    for (p = l.begin(); p != l.end(); p++)
    {
        cout << "\n"
             << *p;
    }
}
int main()
{
    list<int> list1;
    list<int> list2(5);
    for (int i = 0; i < 3; i++)
    {
        list1.push_back(i);
    }
    cout << "Displaying first list: ";
    display(list1);
    list<int>::iterator p;
    for (p = list2.begin(); p != list2.end(); p++)
    {
        *p = 1;
    }
    cout << "\n Displaying Second list:";
    display(list2);
    cout << "Pushing element at front: ";
    list1.push_front(100);
    display(list1);
    cout << "Poping element at front: ";
    list1.pop_front();
    display(list2);
    cout << "Sorting first list: ";
    list1.sort();
    display(list2);
    cout << "Merging list: ";
    list1.merge(list2);
    display(list1);
    list1.reverse();
    cout << "Reversed merged list: ";
    display(list1);
    list<int>::iterator p1;
    for (p1 = list2.begin(); p != list2.end(); p1++)
        *p1 = 1;
    cout << "\n Displaying Second list:";
    display(list2);
    cout << "Pushing element at front: ";
    list2.push_front(100);
    display(list1);
    cout << "\nPoping element at front: ";
    list2.pop_front();
    display(list2);
    cout << "\nSorting first list: ";
    list1.sort();
    display(list1);
    cout << "\nMerging list: ";
    list1.merge(list2);
    display(list1);
    list1.reverse();
    cout << "\nReversed merged list: ";
    display(list1);
    return 0;
}