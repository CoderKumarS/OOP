
using namespace std;
class LFC
{
    int *p;

public:
    LFC(int xx, char ch)
    {
        p = new int();
        *p = xx + int(ch);
        cout << *p;
    }
    ~LFC() { delete p; }
};
int main()
{
    LFC obj(15, 'A');
    return 0;
}
