#include <iostream>
using namespace std;
class Mammals
{
public:
    void putdata()
    {
        cout << "I am Mammal.\n";
    }
};
class MarineAnimals
{
public:
    void putdata()
    {
        cout << "I am a Marine Animal.\n";
    }
};
class BlueWhale : public Mammals, public MarineAnimals
{
public:
    void putdata()
    {
        cout << "I belongs to both the categories.\n";
    }
};
int main()
{
    BlueWhale obj;
    obj.Mammals::putdata();
    obj.MarineAnimals::putdata();
    obj.putdata();
}