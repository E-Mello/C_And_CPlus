#include <iostream>

int main()
{
    // Declare aarray
    char message[5]{'H', 'e', 'l', 'l', 'o'};

    // Print the array
    std::cout << "message: ";
    for (char letter : message)
    {
        std::cout << letter;
    }
    std::cout << std::endl;

    // Change characters in our array
    message[1] = 'a';

    // Print the array
    std::cout << "message: ";
    for (char letter : message)
    {
        std::cout << letter;
    }
    std::cout << std::endl;

    std::cout << "------------------------------------------------------------------------------------------------------------------------" << std::endl;

    char message02[]{'H', 'e', 'l', 'l', 'o', '\0'};
    std::cout << "message02: " << message02 << std::endl;
    std::cout << "sizeof(message02): " << sizeof(message02) << std::endl;

    char message03[6]{'H', 'e', 'l', 'l', 'o'};
    std::cout << "message03: " << message03 << std::endl;
    std::cout << "sizeof(message03): " << sizeof(message03) << std::endl;

    char message04[]{"Hello Wold!"};
    std::cout << "message04: " << message04 << std::endl;
    std::cout << "sizeof(message04): " << sizeof(message04) << std::endl;

    return 0;
}