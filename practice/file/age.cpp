#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "Enter the number of inputs: ";
    ofstream out;
    out.open("Sample.txt");
    int n;
    cin >> n;
    int a;
    if (n < 0 || n >= 50)
    {
        cout << "Exceeding limits!";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > 20 && a < 40)
        {
            out << a << " ";
        }
    }
    out.close();
    ifstream inputFile("Sample.txt");
    if (!inputFile.is_open())
    {
        cout << "Error opening file" << endl;
        return 1;
    }

    int number;
    while (inputFile >> number)
    {
        cout << number << endl;
    }

    inputFile.close();

    return 0;
}
