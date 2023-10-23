#include <iostream>

class MyClass {
public:
    // Default constructor
    MyClass(const MyClass& other) {
        std::cout << "Copy constructor called" << std::endl;
    }
    MyClass() {
        std::cout << "Default constructor called" << std::endl;
    }

    // Copy constructor
    // Parameterized constructor
    MyClass(int value) {
        std::cout << "Parameterized constructor called with value: " << value << std::endl;
    }

};

int main() {
    MyClass obj1;           // Calls the default constructor
    MyClass obj2(42);       // Calls the parameterized constructor
    MyClass obj3 = obj1;    // Calls the copy constructor

    return 0;
}
