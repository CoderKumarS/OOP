#include <iostream>
#include <cstring>
using namespace std;
class error
{
    int err_code;
    char *err_desc;

public:
    error(int c, char *d)
    {
        err_code = c;
        err_desc = new char[strlen(d)];
        strcpy(err_desc, d);
    }
    void err_display()
    {
        cout << "Error Code: " << err_code << " error description " << err_desc << endl;
    }
};
int main()
{
    try
    {
        cout << "Press any key: " << endl;
        throw error(99, "test exception");
    }
    catch (error e)
    {
        cout << "exception caught successfully" << endl;
        e.err_display();
    }
    return 0;
}