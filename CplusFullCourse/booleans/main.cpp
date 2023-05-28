#include <iostream>

int main()
{
    std::cout << "----------------------------------------------------------------------------------" << std::endl;

    bool red_light{true};
    bool green_light{false};

    if (red_light == true)
    {
        std::cout << "Stop" << std::endl;
    }
    else if (green_light)
    {
        std::cout << "Go" << std::endl;
    }
    else
    {
        std::cout << "Proceed with caution" << std::endl;
    }

    if (green_light)
    {
        std::cout << "The light is green" << std::endl;
    }
    else
    {
        std::cout << "The light is not green" << std::endl;
    }

    std::cout << "----------------------------------------------------------------------------------" << std::endl;

    // sizeof()
    std::cout << "sizeof(bool): " << sizeof(bool) << std::endl;

    std::cout << "----------------------------------------------------------------------------------" << std::endl;

    // Printing out a bool
    // 1 -->> true
    // 0 -->> false
    std::cout << std::endl;
    std::cout << "red_light is: " << red_light << std::endl;
    std::cout << "green_light is: " << green_light << std::endl;

    std::cout << "----------------------------------------------------------------------------------" << std::endl;

    // Print out true and false
    std::cout << std::endl;
    std::cout << std::boolalpha; // Forces the output format to true/false
    std::cout << "red_light is: " << red_light << std::endl;
    std::cout << "green_light is: " << green_light << std::endl;

    return 0;
}