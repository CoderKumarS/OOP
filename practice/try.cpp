// #include <iostream>
// using namespace std;

// int main() {
//     int binary, decimal = 0, power = 0;
    
//     cout << "Enter a binary number: ";
//     cin >> binary;
    
//     for (int digit = binary % 10; binary > 0; digit = binary % 10) {
//         decimal += digit * (1 << power);
//         power++;
//         binary /= 10;
//     }
    
//     cout << "Decimal equivalent: " << decimal << endl;
    
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int binary, decimal = 0, base = 1;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary != 0) {
//11  1
        int bit = binary % 10;
//bit = 1 
        decimal += bit * base;
//d = 1+2
        binary /= 10;
//b = 1
        base *= 2;
// ba=2

    }

    cout << "Decimal equivalent: " << decimal << endl;

    return 0;
}
