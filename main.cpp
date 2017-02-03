#include <iostream>
using namespace std;
// import std so that you print using cout instead std:: cout

int main() {
    std::cout << "Hello, World!" << std::endl; //stdout is standard character output
    // << is an insertion operator which indicates that what follows is inserted into std::cout
//    std::cout << "I'm a C++ program";

    int a, b;
    auto result = a;
    // auto cast the data type result equal to the data type of variable a

    a = 5;
    b = 2;
    a = a + 1;
    result = a - b;

    cout << result;


    return 0;
}