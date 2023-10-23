// #include <iostream>
// using namespace std;
// class A
// {
// protected:
//     int x;

// public:
//     A() : x(13) {}
//     int getX() { return x; }
// };
// class B : public A
// {
// protected:
//     int y;

// public:
//     B() : y(9) {}
//     int getY() { return y; }
// };
// class C : public B
// {
// public:
//     int sum() { return getX() + getY(); }
// };
// int main()
// {
//     C obj;
//     cout << obj.sum();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class BaseClass
// {
//     int x;

// public:
//     void setx(int n) { x = n; }
//     void showx() { cout << x; }
// };
// class DerivedClass : private BaseClass
// {
//     int y;

// public:
//     void setxy(int n, int m)
//     {
//         setx(n);
//         y = m;
//     }
//     void showxy()
//     {
//         showx();
//         cout << y << '\n';
//     }
// };
// int main()
// {
//     DerivedClass ob;
//     ob.setxy(10, 20);
//     ob.showxy();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class BaseClass
// {
//     int i;

// public:
//     void setInt(int n);
//     int getInt();
// };
// class DerivedClass : public BaseClass
// {
//     int j;

// public:
//     void setJ(int n);
//     int mul();
// };
// void BaseClass::setInt(int n) { i = n; }
// int BaseClass::getInt() { return i; }
// void DerivedClass::setJ(int n) { j = n; }
// int DerivedClass::mul() { return j * getInt(); }
// int main()
// {
//     DerivedClass ob;
//     ob.setInt(10);
//     ob.setJ(4);
//     cout << ob.mul();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Fruit
// {
// protected:
//     int quantity;

// public:
//     Fruit() : quantity(5) {}
//     int getQuantity() { return quantity; }
// };
// class Apple : public Fruit
// {
// public:
//     int getQuantity() { return quantity + 10; }
// };
// class Orange : public Fruit
// {
// public:
//     int getQuantity() { return quantity * 2; }
// };
// int main()
// {
//     Apple apple;
//     Orange orange;
//     cout << apple.getQuantity() << orange.getQuantity();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Person
// {
// protected:
//     int age;

// public:
//     Person() : age(25) {}
//     int getAge() { return age; }
// };
// class Employee
// {
// protected:
//     int salary;

// public:
//     Employee() : salary(5000) {}
//     int getSalary() { return salary; }
// };
// class Manager : public Person, public Employee
// {
// public:
//     int totalIncome() { return getAge() + getSalary(); }
// };
// int main()
// {
//     Manager obj;
//     cout << obj.totalIncome();
//     return 0;
// }
#include <iostream>
using namespace std;

class A {
public:
    int val;
    A() : val(1) {}

    void func() {
        val *= 2;
    }
};

class B {
public:
    int val;
    B() : val(1) {}

    void func() {
        val *= 3;
    }
};

class C {
public:
    int val;
    C() : val(1) {}

    void func() {
        val *= 5;
    }
};

class D : public A, public B, public C {
public:
    void update_val(int new_val) {
        while (A::val < new_val || B::val < new_val || C::val < new_val) {
            if (A::val * 2 <= new_val) {
                A::func();
            }
            if (B::val * 3 <= new_val) {
                B::func();
            }
            if (C::val * 5 <= new_val) {
                C::func();
            }
        }
    }
};

int main() {
    int new_val;
    cin >> new_val;

    D obj;
    obj.update_val(new_val);

    cout << "Value = " << obj.A::val << endl;
    cout << "A's func called " << obj.A::val / 2 << " times" << endl;
    cout << "B's func called " << obj.B::val / 3 << " times" << endl;
    cout << "C's func called " << obj.C::val / 5 << " times" << endl;

    return 0;
}
