#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, reversed_number = 0, remainder;
    cout << "Enter a number: "
         << "\n";
    cin >> num;
    while (num != 0)
    {
        remainder = num % 10;
        reversed_number = reversed_number * 10 + remainder;
        num /= 10;
    }
    cout << "The reversed number is " << reversed_number;
    return 0;
}
