#include <iostream>

int main()
{
    // Compile time error
    // std::cout << "Hello World!" << std::endl
    std::cout << "Hello World!" << std::endl;

    // Run time error
    // division by zero
    // 7 / 0;
    int value = 7 / 2;
    std::cout << "value: " << value << std::endl;
    return 0;
}