// #include <iostream>

// class Base {
// public:
//     void display() {
//         std::cout << "Base Display" << std::endl;
//     }
// };

// class Derived : public Base {
// public:
//     void display() {
//         std::cout << "Derived Display" << std::endl;
//     }
// };
// int main() {
//     Derived obj;
//     obj.display();
//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Parent {
// public:
//     int value;
//     Parent() { value = 7; }
//     int calculate() { return value / 3; }
// };

// class Child : public Parent {
// public:
//     int value;
//     Child() { value = 13; }
//     int calculate() { return Parent::calculate() * value; }
// };

// int main() {
//     Child obj;
//     cout << obj.calculate();
//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Parent {
// public:
//     int x;
//     Parent() { x = 20; }
//     virtual int getValue() { return x + 5; }
// };

// class Child1 : virtual public Parent {
// public:
//     int y;
//     Child1() { y = 3; }
// };

// class Child2 : virtual public Parent {
// public:
//     int z;
//     Child2() { z = 7; }
// };

// class FinalChild : public Child1, public Child2 {
// public:
//     int getValue() override { return Child1::getValue() - Child2::getValue(); }
// };

// int main() {
//     FinalChild obj;
//     cout << obj.getValue();
//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;

// class Vehicle {
// protected:
//     string brand;
    
// public:
//     Vehicle(const string &b) : brand(b) {}
//     virtual void displayInfo() {
//         cout << "Brand: " << brand << endl;
//     }
// };

// class Car: public Vehicle {
// protected:
//     int doors;

// public:
//     Car(const string &b, int d) : Vehicle(b), doors(d) {}
//     void displayInfo() override {
//         Vehicle::displayInfo();
//         cout << "Number of Doors: " << doors << endl;
//     }
// };

// class Bicycle: public Vehicle {
// protected:
//     int gears;

// public:
//     Bicycle(const string &b, int g) : Vehicle(b), gears(g) {}
//     void displayInfo() override {
//         Vehicle::displayInfo();
//         cout << "Number of Gears: " << gears << endl;
//     }
// };

// int main() {
//     string carBrand, bicycleBrand;
//     int carDoors, bicycleGears;
//     cin >> carBrand;
//     cin >> carDoors;
//     cin >> bicycleBrand;
//     cin >> bicycleGears;

//     Car myCar(carBrand, carDoors);
//     Bicycle myBicycle(bicycleBrand, bicycleGears);

//     myCar.displayInfo();
//     cout << endl;
//     myBicycle.displayInfo();

//     return 0;
// }
// #include <iostream>
// #include <iomanip>
// using namespace std;
// class Triangle {
// public:
//     Triangle(double b, double h) : base(b), height(h) {}
//     double getArea() { return 0.5 * base * height; }
// private:
//     double base, height;
// };

// int main() {
//     Triangle* t = new Triangle(4.0, 6.0);
//     double result = t->getArea();
//     delete t;
//     std::cout << fixed << setprecision(1) << result;
//     return 0;
// }
// #include <iostream>

// int main() {
//     int* ptr = new int[5]();
//     std::cout << ptr[3];
//     delete[] ptr;
//     return 0;
// }
// #include <iostream>

// int main() {
//     int* ptr = new int[3];
//     ptr[0] = 1;
//     ptr[1] = 2;
//     ptr[2] = 3;
//     delete[] ptr;
//     std::cout << ptr[1];
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Cube {
// public:
//     Cube(double s) : side(s) {}
//     double getVolume() { return side * side * side; }
// private:
//     double side;
// };

// int main() {
//     Cube* c1 = new Cube(2.0);
//     Cube* c2 = c1;
//     delete c1;
//     std::cout << c2->getVolume();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Car {
// public:
//     Car(const char* m) : model(m) {}
//     const char* getModel() { return model; }
// private:
//     const char* model;
// };

// int main() {
//     Car* c1 = new Car("Sedan");
//     Car* c2 = new Car("SUV");
//     delete c2;
//     std::cout << c1->getModel();
//     delete c1;
//     return 0;
// }
// #include <iostream>
// #include <cstring>

// class House {
// public:
//     House() : address(new char[30]) {}
//     virtual ~House() { delete[] address; }

//     void SetAddress(const char* newAddress) {
//         strcpy(address, newAddress);
//     }

//     void DisplayAddress() {
//         std::cout << "Address: " << address;
//     }

// private:
//     char* address;
// };

// int main() {
//     House house;
//     house.SetAddress("123 Main Street");
//     house.DisplayAddress();
//     return 0;
// }
// #include <iostream>

// int main() {
//     int* ptr = new int;
//     delete ptr;
//     ptr = new int;
//     std::cout << *ptr;
//     return 0;
// }
// #include <iostream>

// class Book {
// public:
//     Book() { data = new char[10]; }
//     virtual ~Book() { delete[] data; }
    
// private:
//     char* data;
// };

// int main() {
//     Book* book = new Book();
//     book = new Book();
//     return 0;
// }
// #include <iostream>
// int main() {
//     int* ptr = new int(10);
//     int* otherPtr = ptr;
//     *otherPtr *= 2;
//     delete ptr;
//     std::cout << *otherPtr << std::endl;
//     return 0;
// }
#include <iostream>

int main() {
    float* ptr = new float(3.14);
    float* newPtr = ptr;
    delete ptr;
    std::cout << *newPtr;
    return 0;
}