// // incomplete

// #include <iostream>
// using namespace std;
// class Test
// {
// public:
//     Test(int x) { cout << "Constructor"<<x<<"\n"; }
//     ~Test() { cout << "Destructor\n"; }
// };
// int main()
// {
//     Test t1(5);
//     try
//     {
//         throw 10;
//     }
//     catch (int z)
//     {
//         cout << "caught\n";
//     }
//     return 0;
// }