#include <iostream>

int main()
{
    int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    // Read beyounds : will read garbage or craash your program
    std::cout << "numbers[12]" << numbers[12] << std::endl;

    numbers[1299999] = 1000;
    std::cout << "numbers[129999]: " << numbers[1299999] << std::endl;

    std::cout << "Program ended successfully" << std::endl;

    return 0;
}