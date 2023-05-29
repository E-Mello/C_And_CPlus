#include <iostream>

int main()
{
    // Normal repetition
    std::cout << "Hello World!" << std::endl;
    std::cout << "Hello World!" << std::endl;
    std::cout << "Hello World!" << std::endl;

    std::cout << "---------------------------------------------------------------------------------------" << std::endl;

    // Repetition with while loop
    int i{0};

    while (i < 10)
    {
        std::cout << i << ": Hello World!" << std::endl;
        ++i;
    }

    std::cout << "---------------------------------------------------------------------------------------" << std::endl;

    // Use size_t for array index representation (unsigned int)
    i = 0;

    while (i < 10)
    {
        std::cout << i << ": Hello World!" << std::endl;
        ++i;
    }
    // std::cout << "i: " << i << std::endl; // i is still accessible outside the while loop

    std::cout << "sizeof(size_t): " << sizeof(size_t) << std::endl; // 8 bytes (64 bits)

    std::cout << "---------------------------------------------------------------------------------------" << std::endl;

    // Iterator declared outside the loop
    size_t j{0}; // j is declared outside the loop

    while (j < 10)
    {
        std::cout << j << ": Hello World!" << std::endl;
        ++j;
    }
    std::cout << "j: " << j << std::endl; // j is still accessible outside the while loop

    std::cout << "---------------------------------------------------------------------------------------" << std::endl;

    // Leave out the iterator declaration part
    j = 0;

    while (j < 10)
    {
        std::cout << j << ": I Love C++!" << std::endl;
        ++j;
    }

    std::cout << "---------------------------------------------------------------------------------------" << std::endl;

    // Don't hard code values: BAD!
    const size_t COUNT{5};

    j = 0;

    while (j < COUNT)
    {
        std::cout << j << ": Mello!" << std::endl;
        ++j;
    }

    return 0;
}