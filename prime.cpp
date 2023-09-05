#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    bool is_prime = true;
    cout << "Enter the number";
    cin >> num;
    if (num == 0 || num == 1)
    {
        cout << "not possible";
        is_prime = false;
    }
    else
    {
        for (int i = 2; i < num / 2; i++)
        {
            if (num % i == 0)
            {
                is_prime = false;
                break;
            }
            else
            {
                is_prime = true;
            }
        }

        if (is_prime)
        {
            cout << "not prime";
        }
        cout << "prime";
    }

    return 0;
}
