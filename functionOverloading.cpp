#include <iostream>
using namespace std;

int area(int n) { return n * n; }
int area(int n, int m) { return n * m; }
int perimeter(int n) { return (4 * n); }
int perimeter(int n, int m) { return (2*(n + m)); }
int main()
{
    int sq = area(5);
    int re = area(5, 10);
    int psq = perimeter(5);
    int pre = perimeter(5, 10);
    cout << "Area of square " << sq << endl;
    cout << "Area of rectangle " << re << endl;
    cout << "Perimeter of square " << psq << endl;
    cout << "Perimeter of reactangle " << pre;
    return 0;
}
// #include <iostream>
// using namespace std;

// class Shape
// {
// public:
//     virtual int area() = 0;
//     virtual int perimeter() = 0;
// };

// class Square : public Shape
// {
// public:
//     Square(int side) : side(side) {}
//     int area() override { return side * side; }
//     int perimeter() override { return 4 * side; }

// private:
//     int side;
// };

// class Rectangle : public Shape
// {
// public:
//     Rectangle(int length, int width) : length(length), width(width) {}
//     int area() override { return length * width; }
//     int perimeter() override { return 2 * length + 2 * width; }

// private:
//     int length;
//     int width;
// };

// int main()
// {
//     Square square(5);
//     cout << "Area of square: " << square.area() << endl;
//     cout << "Perimeter of square: " << square.perimeter() << endl;

//     Rectangle rectangle(10, 20);
//     cout << "Area of rectangle: " << rectangle.area() << endl;
//     cout << "Perimeter of rectangle: " << rectangle.perimeter() << endl;

//     return 0;
// }