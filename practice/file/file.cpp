// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ofstream file; // Opening a file in write mode
//     file.open("sample.txt", ios::out);
//     if (file.is_open())
//     {
//         cout << "File opened successfully!\n"; // Writing data to the file
//         file << "Hello, World!\n";
//         file << "This is a sample file.\n";
//         file << "File handling in C++ is easy.\n"; // Closing the file
//         file.close();
//         cout << "File closed successfully!\n";
//     }
//     else
//     {
//         cout << "Failed to open the file!\n";
//     }
//     return 0;
// }
// #include <iostream>
// #include <fstream>
// int main()
// {
//     std::ifstream file("input.txt");
//     std::string data;
//     file >> data;
//     std::cout << data << std::endl;
//     file.close();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     ofstream ofile;
//     ofile.open("find.txt");
//     ofile << "letsfindcourse" << endl;
//     cout << "Data written to file" << endl;
//     ofile.close();
//     return 0;
// }
// #include <fstream>
// #include <iostream>
// using namespace std;
// int main()
// {
//     fstream myFile("test.txt", ios::in | ios::out | ios::trunc);
//     myFile << "Welcome to the CPP";
//     myFile.seekg(11, ios::beg);
//     char A[3];
//     myFile.read(A, 3);
//     cout << A << endl;
//     myFile.close();
// }
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ifstream file("data.txt");
//     if (file.is_open())
//     {
//         string line;
//         while (getline(file, line))
//         {
//             cout << line << endl;
//         }
//         file.close();
//     }
//     else
//     {
//         cout << "Error opening the file!";
//     }
//     return 0;
// }
// #include <iostream>
// #include <fstream>
// int main()
// {
//     long pos;
//     std::ofstream outfile;
//     outfile.open("test.txt");
//     outfile.write("This is an apple", 16);
//     pos = outfile.tellp();
//     outfile.seekp(pos - 7);
//     outfile.write(" sam", 4);
//     outfile.close();
//     return 0;
// }
// #include <iostream>
// #include <fstream>
// int main()
// {
//     std::ifstream file("data.txt");
//     if (!file)
//     {
//         std::cout << "Failed to open the file!";
//     }
//     else
//     {
//         std::cout << "File opened successfully!";
//     }
//     file.close();
//     return 0;
// }
// #include <iostream>
// #include <fstream>
// int main()
// {
//     std::ofstream file;
//     file.open("data.txt");
//     file << "Hello, World!";
//     file.close();
//     return 0;
// }
// #include <iostream>
// #include <fstream>
// int main()
// {
//     std::ofstream file("output.txt");
//     file << "Line 1";
//     file.seekp(5);
//     file << "2";
//     file.close();
//     return 0;
// }
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ofstream file("text.txt");
//     if (file)
//     {
//         file << "Hello\n";
//         file << "World\n";
//         file << "Welcome\n";
//         file.close();
//     }
//     else
//     {
//         cout << "File not found.";
//     }
//     return 0;
// }
// #include <iostream>
// #include <fstream>
// struct Product
// {
//     std::string name;
//     double price;
// };
// int main()
// {
//     std::ofstream file("products.txt", std::ios::binary);
//     Product prod;
//     prod.name = "Keyboard";
//     prod.price = 29.99;
//     file.write(reinterpret_cast<char *>(&prod), sizeof(Product));
//     file.close();
//     return 0;
// }
// #include <iostream>
// #include <fstream>
// int main() {
// std::ifstream file("data.bin", std::ios::binary);
// bool isOpen = file.is_open();
// file.close();
// return 0;
// }/
// #include <iostream>
// #include <fstream>
// int main()
// {
//     std::fstream file("data.txt", std::ios::in | std::ios::out | std::ios::binary);
//     int number = 42;
//     file.write(reinterpret_cast<char *>(&number), sizeof(number));
//     file.seekg(0);
//     int readNumber;
//     file.read(reinterpret_cast<char *>(&readNumber), sizeof(readNumber));
//     file.close();
//     std::cout << "The number read from the file is: " << readNumber << std::endl;
//     return 0;
// }
#include <iostream>
#include <fstream>
using namespace std;
struct Student
{
    string name;
    int rollNo;
    float marks;
};
int main()
{
    fstream file("students.txt", ios::in | ios::out | ios::app);
    if (file)
    {
        Student s1{"John", 101, 85.5};
        Student s2{"Jane", 102, 92.0};
        file << s1.name << " " << s1.rollNo << " " << s1.marks << endl;
        file << s2.name << " " << s2.rollNo << " " << s2.marks << endl;
        file.seekg(0);
        Student readS1;
        Student readS2;
        file >> readS1.name >> readS1.rollNo >> readS1.marks;
        file >> readS2.name >> readS2.rollNo >> readS2.marks;
        cout << readS1.name << " scored " << readS1.marks << endl;
        cout << readS2.name << " scored " << readS2.marks << endl;
        file.close();
    }
    else
    {
        cout << "File not found.";
    }
    return 0;
}
