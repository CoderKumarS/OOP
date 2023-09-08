#include <iostream>

using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)

            if (j% 2 == 0)
            {
                cout << "1 " ;
            }
            else
            {
                cout << "0 " ;
            }
            cout << endl;
    }
    return 0;
}