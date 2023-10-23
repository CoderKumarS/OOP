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
