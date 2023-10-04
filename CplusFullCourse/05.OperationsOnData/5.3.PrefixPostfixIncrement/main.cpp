#include <iostream>

int main()
{
    std::cout << "---------------------------------------------------------------" << std::endl;
    int value{5};

    // Increment by one
    value = value + 1;
    std::cout << "The value imprement is: " << value << std::endl;

    value = 5; // reset value

    // Decrement by one
    value = value - 1;
    std::cout << "The value decrement is: " << value << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;

    std::cout << "=========== Postfix ===========" << std::endl;

    value = 5;

    std::cout << "The value before increment: " << value++ << std::endl;
    std::cout << "The value is (after incrementing): " << value << std::endl;

    // Decrement with postfix

    // Reset value to 5
    value = 5;

    std::cout << "The value before increment: " << value-- << std::endl;
    std::cout << "The value is (after decrementing): " << value << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;

    std::cout << "=========== Prefix ===========" << std::endl;

    value = 5;

    std::cout << "The value before increment: " << ++value << std::endl;
    std::cout << "The value is (after incrementing): " << value << std::endl;

    // Decrement with prefix

    // Reset value to 5
    value = 5;

    std::cout << "The value before increment: " << --value << std::endl;
    std::cout << "The value is (after decrementing): " << value << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;

    return 0;
}