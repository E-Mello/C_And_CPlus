#include <iostream>

int main()
{
    int max{};

    int a{35};
    int b{20};

    std::cout << std::endl;
    std::cout << "using regular if-else statement" << std::endl;

    if (a > b)
    {
        max = a;
        std::cout << "a is greater than b" << std::endl;
    }
    else
    {
        max = b;
        std::cout << "b is greater than a" << std::endl;
    }

    std::cout << std::endl;
    std::cout << "using ternary operator" << std::endl;

    // test
    //  a > b ? "a is greater than b" : "b is greater than a";
    max = a > b ? a : b;
    std::cout << "max: " << max << std::endl;

    std::cout << std::endl;
}