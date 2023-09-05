#include<iostream>
// case 2
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int x, y, children, adult, senior;
    cin >> x >> y;
    children = (y - (5 * x)) / 13;
    adult = children + x;
    senior = 2 * children;
    cout << "Number of children tickets sold : " << children << endl;
    cout << "Number of adult tickets sold : " << adult << endl;
    cout << "Number of senior tickets sold : " << senior << endl;

    //case 2
    int num1;
    double num2;
    char ch;

    cin >> num1;
    cin >> num2;
    cin >> ch;

    cout << "Employee ID: " << num1 << endl;
    cout << fixed << setprecision(2) << "Salary: " << num2 << endl;
    cout << "Department code: " << ch << endl;

    return 0;
}
