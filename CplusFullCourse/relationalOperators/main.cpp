#include <iostream>

int main()
{
    int number1{45};
    int number2{60};

    std::cout << "Number1 is: " << number1 << std::endl;
    std::cout << "Number2 is: " << number2 << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Comparing variables" << std::endl;

    std::cout << std::boolalpha; // Make bool show up as true/false instead of 1/0
    // Stress the need for parentheses here
    std::cout << "Number1 < Number2: " << (number1 < number2) << std::endl;
    std::cout << "Number1 <= Number2: " << (number1 <= number2) << std::endl;
    std::cout << "Number1 > Number2: " << (number1 > number2) << std::endl;
    std::cout << "Number1 >= Number2: " << (number1 >= number2) << std::endl;
    std::cout << "Number1 == Number2: " << (number1 == number2) << std::endl;
    std::cout << "Number1 != Number2: " << (number1 != number2) << std::endl;

    return 0;
}