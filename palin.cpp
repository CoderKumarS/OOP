// check whether the string is palindrome
#include <iostream>
#include <string>

bool isPalindrome(const std::string& str) {
    int startPtr = 0;
    int endPtr = str.length() - 1;
  
    while (startPtr < endPtr) {
        if (str[startPtr] != str[endPtr]) {
            return false;
        }
        startPtr++;
        endPtr--;
    }

    return true;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    if (isPalindrome(str)) {
        std::cout << str << " is a palindrome." << std::endl;
    } else {
        std::cout << str << " is not a palindrome." << std::endl;
    }

    return 0;
}
