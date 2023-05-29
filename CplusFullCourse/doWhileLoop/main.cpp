#include <iostream>

int main()
{
    // Normal repetition
    std::cout << "Hello World!" << std::endl;
    std::cout << "Hello World!" << std::endl;
    std::cout << "Hello World!" << std::endl;

    std::cout << "---------------------------------------------------------------------------------------" << std::endl;

    // Repetition with do while loop

    size_t i{0};
    do
    {
        std::cout << i << ": Hello World!" << std::endl;
        ++i;
    } while (i < 10);

    std::cout << "---------------------------------------------------------------------------------------" << std::endl;

    // Leave out the iterator declaration part
    i = 0;

    do
    {
        std::cout << i << ": I Love C++!" << std::endl;
        ++i;
    } while (i < 10);

    std::cout << "---------------------------------------------------------------------------------------" << std::endl;

    // Don't hard code values: BAD!
    const size_t COUNT{5};

    i = 0;

    do
    {
        std::cout << i << ": Mello!" << std::endl;
        ++i;
    } while (i < COUNT);
}