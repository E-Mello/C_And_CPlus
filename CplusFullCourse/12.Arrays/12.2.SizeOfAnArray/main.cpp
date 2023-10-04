#include <iostream>

int main()
{
    int scores[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "sizeof(scores): " << sizeof(scores) << std::endl;
    std::cout << "sizeof(scores[0]): " << sizeof(scores[0]) << std::endl;

    for (size_t i{0}; i < 10; ++i)
    {
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }

    std::cout << "--------------------------------------------------------------------------------" << std::endl;

    for (int value : scores)
    {
        std::cout << "value: " << value << std::endl;
    }
}