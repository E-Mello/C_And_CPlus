#include <iostream>

int main()
{
    int number1{55};
    int number2{60};

    bool result = (number1 > number2); // Expression yielding the condition
    std::cout << std::boolalpha << "result: " << result << std::endl;

    std::cout << std::endl;
    std::cout << "free standing if statement" << std::endl;

    // if(result) // if result is true
    if (result == true)
    {
        std::cout << number1 << " is less than " << number2 << std::endl;
    }

    // if(!result)
    if (!(result == true))
    {
        std::cout << number1 << " is not less than " << number2 << std::endl;
    }

    // Using else
    std::cout << std::endl;
    std::cout << "using the else clause: " << std::endl;

    if (result == true)
    {
        std::cout << number1 << " is less than " << number2 << std::endl;
    }
    else
    {
        std::cout << number1 << " is not less than " << number2 << std::endl;
    }

    // Nesting if statements
    std::cout << std::endl;
    std::cout << "Nesting if statements: " << std::endl;

    bool red = false;
    bool green{false};
    bool yellow{true};
    bool police_stop{true};

    if (red)
    {
        std::cout << "Red light, stop!" << std::endl;
    }
    else
    {
        if (green)
        {
            std::cout << "Green light, go!" << std::endl;
        }
        else
        {
            if (yellow)
            {
                std::cout << "Yellow light, caution!" << std::endl;
            }
            else
            {
                std::cout << "No traffic light, proceed with caution!" << std::endl;
            }
        }
    }

    return 0;
}