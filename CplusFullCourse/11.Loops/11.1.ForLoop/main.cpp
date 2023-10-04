#include <iostream>

int main()
{
    // Normal repetition
    std::cout << "Hello World!" << std::endl;
    std::cout << "Hello World!" << std::endl;
    std::cout << "Hello World!" << std::endl;

    std::cout << "---------------------------------------------------------------------------------------" << std::endl;

    // Repetition with for loop
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << ": Hello World!" << std::endl;
    }

    std::cout << "---------------------------------------------------------------------------------------" << std::endl;

    // Use size_t for array index representation (unsigned int)
    for (size_t i{0}; i < 10; ++i)
    {
        std::cout << i << ": Hello World!" << std::endl;
    }
    // std::cout << "i: " << i << std::endl; // i is still accessible outside the for loop

    std::cout << "sizeof(size_t): " << sizeof(size_t) << std::endl; // 8 bytes (64 bits)

    std::cout << "---------------------------------------------------------------------------------------" << std::endl;

    // Iterator declared outside the loop
    size_t i{0}; // i is declared outside the loop

    for (i; i < 10; ++i)
    {
        std::cout << i << ": Hello World!" << std::endl;
    }
    std::cout << "i: " << i << std::endl; // i is still accessible outside the for loop

    std::cout << "---------------------------------------------------------------------------------------" << std::endl;

    // Leave out the iterator declaration part
    i = 0;

    for (; i < 10; ++i)
    {
        std::cout << i << ": I Love C++!" << std::endl;
    }

    std::cout << "---------------------------------------------------------------------------------------" << std::endl;

    // Don't hard code values: BAD!
    const size_t COUNT{5};

    for (size_t i{0}; i < COUNT; ++i)
    {
        std::cout << i << ": Mello!" << std::endl;
    }

    return 0;
}