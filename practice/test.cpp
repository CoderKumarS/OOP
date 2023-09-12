#include <iostream>

class MultiplicationGame {
public:
    void game(int n) {
        int p = 1;
        std::string winner;

        while (p < n) {
            if (winner == "John") {
                p *= 2;
                winner = "Michael";
            } else {
                for (int i = 2; i <= 9; i++) {
                    if (p * i >= n) {
                        p *= i;
                        winner = "John";
                        break;
                    }
                }
            }
        }

        std::cout << n << " " << winner << " wins" << std::endl;
    }
};

int main() {
    int n;
    std::cin >> n;

    MultiplicationGame game;
    game.game(n);

    return 0;
}
// #include <iostream>
// #include <cctype> // For isalpha and tolower
// #include<string.h>
// int countConsonants(const char *word) {
//     int count = 0;

//     while (*word) {
//         char c = tolower(*word);
//         if (isalpha(c) && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
//             count++;
//         }
//         word++;
//     }

//     return count;
// }

// int main() {
//     char input[1000];
//     std::cout << "Enter a paragraph: ";
//     std::cin.getline(input, sizeof(input));

//     char *token = strtok(input, " ");

//     while (token != nullptr) {
//         int consonantCount = countConsonants(token);
//         std::cout << consonantCount << " ";
//         token = strtok(nullptr, " ");
//     }

//     return 0;
// }
// #include <iostream>

// using namespace std;
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)

//             if (j% 2 == 0)
//             {
//                 cout << "1 " ;
//             }
//             else
//             {
//                 cout << "0 " ;
//             }
//             cout << endl;
//     }
//     return 0;
// }