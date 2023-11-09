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
// #include <iostream>

// int main() {
//     float* ptr = new float(3.14);
//     float* newPtr = ptr;
//     delete ptr;
//     std::cout << *newPtr;
//     return 0;
// }

// #include <iostream>

// class Animal {
// public:
//     virtual void makeSound() { std::cout << "Animal makes a sound." << std::endl; }
// };

// class Dog : public Animal {
// public:
//     void makeSound() override { std::cout << "Dog barks." << std::endl; }
// };

// int main() {
//     Animal* animals[2];
//     animals[0] = new Animal;
//     animals[1] = new Dog;
//     for (int i = 0; i < 2; ++i) {
//         animals[i]->makeSound();
//         delete animals[i];
//     }
//     return 0;
// }
// #include <iostream>

// class Vehicle {
// public:
//     virtual ~Vehicle() { std::cout << "Vehicle destructor\n"; }
// };

// class Bike : public Vehicle {
// public:
//     ~Bike() { std::cout << "Bike destructor\n"; }
// };

// int main() {
//     Vehicle* vehicle = new Bike();
//     delete vehicle;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Media {
// public:
//     virtual void play() const = 0;
// };

// class Audio : public Media {
// public:
//     void play() const override {
//         cout << "Audio Playing..." << endl;
//     }
// };

// class Video : public Media {
// public:
//     void play() const override {
//         cout << "Video Playing..." << endl;
//     }
// };

// int main() {
//     Media* media1 = new Audio();
//     Media* media2 = new Video();

//     media1->play();
//     media2->play();

//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Employee {
// public:
//     virtual void showSalary() const {
//         cout << "Salary: $5000" << endl;
//     }
// };

// class Manager : public Employee {
// public:
//     void showSalary() const override {
//         cout << "Salary: $8000" << endl;
//     }
// };

// int main() {
//     Employee* empPtr1 = new Manager();
//     empPtr1->showSalary();

//     Employee* empPtr2 = new Employee();
//     empPtr2->showSalary();

//     delete empPtr1;
//     delete empPtr2;
//     return 0;
// }
// #include <iostream>

// class A {
// public:
//     void show(int x) { std::cout << "A: " << x << std::endl; }
// };

// class B : public A {
// };

// int main() {
//     B b;
//     b.show(5);
//     return 0;
// }
// #include <iostream>
// using namespace std;

// class AbstractItem {
// public:
//     virtual void showDetails() const = 0;
// };

// class Book : public AbstractItem {
// public:
//     void showDetails() const override {
//         cout << "Book: Harry Potter";
//     }
// };

// int main() {
//     AbstractItem* item = new Book();
//     item->showDetails();
//     return 0;
// }
// #include <iostream>
// using namespace std;

// class AbstractPrinter {
// public:
//     virtual void print() const = 0;
// };

// class LaserPrinter : public AbstractPrinter {
// public:
//     void print() const override {
//         cout << "Printing with laser printer";
//     }
// };

// int main() {
//     AbstractPrinter* printer = new LaserPrinter();
//     printer->print();
//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Song {
// public:
//     string title;
//     Song* next;

//     Song(string t) : title(t), next(nullptr) {}
// };

// int main() {
//     Song song1("Black Swan");
//     Song song2("Euphoria");
//     Song song3("Serendipity");
//     song1.next = &song2;
//     song2.next = &song3;
//     cout << song1.next->next->title;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// class AbstractTask {
// public:
//     virtual void execute() const = 0;
// };

// class ReportTask : public AbstractTask {
// public:
//     void execute() const override {
//         cout << "Executing report task";
//     }
// };

// int main() {
//     AbstractTask* task = new ReportTask();
//     task->execute();
//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;
// class A{
// 	int a;
//     public:
// 	virtual void func() = 0;
// };
 
// class B: public A{
//    public:
// 	void func(){
// 		cout<<"Class B"<<endl;
// 	}	
// };
// int main(){
// 	B b;
// 	b.func();
// 	return 0;
// }
// #include <iostream>
// using namespace std;

// class Cube {
// public:
//     int length;
//     Cube() : length(3) {}
//     ~Cube() { cout << length * length * length; }
// };

// int main() {
//     Cube* cubePtr = new Cube;
//     delete cubePtr;
//     return 0;
// }
// #include <iostream>

// class one {
// public:
//     virtual void display() {
//         std::cout << "Good morning!" << std::endl;
//     }
// };

// class two : public one {
// public:
//     void display() {
//         std::cout << "Have a good day!" << std::endl;
//     }
// };

// int main() {
//     two obj;
//     one& ref = obj;
//     ref.display();

//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Fruit {
// public:
//     virtual void printColor() const {
//         cout << "Unknown color" << endl;
//     }
// };

// class Banana : public Fruit {
// public:
//     void printColor() const override {
//         cout << "Yellow" << endl;
//     }
// };

// int main() {
//     Fruit* f = new Banana;
//     f->printColor();
//     delete f;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Table {
// public:
//     int length;
//     Table() : length(4) {}
//     ~Table() { cout << length * 2 + 1; }
// };

// int main() {
//     Table* tblPtr = new Table;
//     delete tblPtr;
//     return 0;
// }
// #include <iostream>

// class Laptop {
// public:
//     void display() {
//         std::cout << "Laptop screen turned on" << std::endl;
//     }
// };

// class GamingLaptop : public Laptop {
// public:
//     void display() {
//         std::cout << "Gaming laptop screen turned on" << std::endl;
//     }
// };

// int main() {
//     Laptop laptop;
//     GamingLaptop gamingLaptop;
//     Laptop* ptr = &gamingLaptop;
//     ptr->display();
//     return 0;
// }

#include<iostream>
using namespace std;
void show(int *p, int *q){
    cout<<p<<" "<<q<<endl;
    cout<<*p<<" "<<*q<<endl;
    p=q;
    cout<<p<<" "<<q<<endl;
    cout<<*p<<" "<<*q<<endl;
    *p=9;
    cout<<p<<" "<<q<<endl;
    cout<<*p<<" "<<*q<<endl;
    *q=10;
    cout<<p<<" "<<q<<endl;
    cout<<*p<<" "<<*q<<endl;
}
int main(){
    int a=6,b=7;
    show(&a,&b);
    cout<<a<<" "<<b;
   return 0;
}