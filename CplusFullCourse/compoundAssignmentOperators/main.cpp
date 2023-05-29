#include <iostream>

int main()
{
    int value{45};

    std::cout << "The value is: " << value << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;
    value += 5; // value = value + 5
    std::cout << "The value is (after +=5): " << value << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;
    value -= 5; // value = value - 5
    std::cout << "The value is (after -=5): " << value << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;
    value *= 5; // value = value * 5
    std::cout << "The value is (after *=5): " << value << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;
    value /= 5; // value = value / 5
    std::cout << "The value is (after /=5): " << value << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;
    value %= 5; // value = value % 5
    std::cout << "The value is (after %=5): " << value << std::endl;

    return 0;
}