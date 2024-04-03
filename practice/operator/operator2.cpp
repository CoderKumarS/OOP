#include<iostream>
using namespace std;

class complex {
public:
    int x, y;

    complex(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }

    void display() {
        cout << x << " + " << y << "i";
    }

    complex operator +(const complex& c2) {
        complex c3;
        c3.x = this->x + c2.x;
        c3.y = this->y + c2.y;
        return c3;
    }
};

int main() {
    complex c1[5], sum;

    for (int i = 0; i < 5; i++) {
        int x, y;
        cin >> x >> y;
        c1[i] = complex(x, y); // Correct way to set values for each object
        sum = sum + c1[i]; // Correct way to use the operator+
    }

    sum.display(); // Display the result after adding all complex numbers
    return 0;
}

