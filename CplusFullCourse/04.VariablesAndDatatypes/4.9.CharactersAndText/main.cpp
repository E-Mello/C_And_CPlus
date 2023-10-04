#include <iostream>

int main()
{
    std::cout << "------------------------------------------------------------------------" << std::endl;

    char character1{'a'};
    char character2{'b'};
    char character3{'c'};
    char character4{'d'};
    char character5{'e'};

    std::cout << "character 1 is: " << character1 << std::endl;
    std::cout << "character 2 is: " << character2 << std::endl;
    std::cout << "character 3 is: " << character3 << std::endl;
    std::cout << "character 4 is: " << character4 << std::endl;
    std::cout << "character 5 is: " << character5 << std::endl;

    std::cout << "------------------------------------------------------------------------" << std::endl;

    char value = 65;                                                     // ASCII code for 'A'
    std::cout << "value: " << value << std::endl;                        // will print 'A'
    std::cout << "value(int): " << static_cast<int>(value) << std::endl; // will print 65

    return 0;
}