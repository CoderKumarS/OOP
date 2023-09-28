// #include <iostream>
// using namespace std;
// class Test
// {
// public:
//     Test(Test &t) {}
//     Test() {}
// };
// Test fun()
// {
//     cout << "fun() Called\n";
//     Test t;
//     return t;
// }
// int main()
// {
//     Test t1;
//     Test t2 = fun();
//     return 0;
// }
// 12345678910111213141516171819
// #include <iostream>
// class MyClass
// {
// public:
//     int x;
//     MyClass() : x(0) {}
//     MyClass(const MyClass &other) : x(other.x) {}
// };
// int main()
// {
//     MyClass obj1;
//     obj1.x = 5;
//     MyClass obj2 = obj1;
//     obj2.x = 10;
//     std::cout << obj1.x << " " << obj2.x << std::endl;
//     return 0;
// }
// 2345678910111213141516171819202122232425
// #include <iostream>
// using namespace std;
// class MyClass
// {
//     int x;

// public:
//     MyClass(int val) { x = val; }
//     MyClass(const MyClass &obj) { x = obj.x + 10; }
//     int getX() { return x; }
// };
// int main()
// {
//     MyClass obj1(5);
//     MyClass obj2 = obj1;
//     cout << obj2.getX();
//     return 0;
// }
// 1234567891011121314151617181920212223
// #include <iostream>
// using namespace std;
// class LFC
// {
//     int *p;

// public:
//     LFC(int xx, char ch)
//     {
//         p = new int();
//         *p = xx + int(ch);
//         cout << *p;
//     }
//     ~LFC() { delete p; }
// };
// int main()
// {
//     LFC obj(15, 'A');
//     return 0;
// }
// #include <iostream>
// class MyClass
// {
// public:
//     int x;
//     MyClass(int value = 0) : x(value) { std::cout << "Parameterized constructor called!" << std::endl; }
//     MyClass(const MyClass &other) : x(other.x) { std::cout << "Copy constructor called!" << std::endl; }
//     ~MyClass() { std::cout << "Destructor called!" << std::endl; }
// };
// int main()
// {
//     MyClass obj1(5);
//     std::cout << obj1.x << std::endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Point
// {
//     int x, y;

// public:
//     Point(int i = 0, int j = 0)
//     {
//         x = i;
//         y = j;
//     }
//     int getX() { return x; }
//     int getY() { return y; }
// };
// int main()
// {
//     Point p1;
//     Point p2 = p1;
//     cout << "x = " << p2.getX() << " y = " << p2.getY();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Test
// {
// private:
//     int x;

// public:
//     Test(int i)
//     {
//         x = i;
//         cout << "Called" << endl;
//     }
// };
// int main()
// {
//     Test t(20);
//     t = 30;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Shape
// {
//     string type;
//     int sides;

// public:
//     Shape(string t = "Unknown", int s = 0)
//     {
//         type = t;
//         sides = s;
//     }
//     void displayInfo() { cout << "Type: " << type << ", Sides: " << sides << endl; }
// };
// int main()
// {
//     Shape s1;
//     s1.displayInfo();
//     Shape s2("Triangle", 3);
//     s2.displayInfo();
//     return 0;
// }
// #include <iostream>
// #include <fstream>
// int main()
// {
//     std::fstream file(
//         "data.txt", std::ios::in | std::ios::out);
//     if (file.is_open())
//     {
//         int number;
//         file >> number;
//         file.seekp(0);
//         number *= 2;
//         file << number;
//         file.close();
//     }
//     else
//     {
//         std::cout << "File not found." << std::endl;
//     }
//     return 0;
// }
