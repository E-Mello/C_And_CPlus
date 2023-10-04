#include <iostream>

int main()
{
    // Variables
    int number1{2};
    int number2{7};

    std::cout << "---------------------------------------------------------------" << std::endl;
    // Addition
    int sum{number1 + number2};
    int other_sum = number1 + number2 + number1;

    std::cout << "The sum is: " << sum << std::endl;
    std::cout << "Other sum is: " << other_sum << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;

    // Subtraction
    int diff{number1 - number2};
    int other_diff = number1 - number2 - number1;

    std::cout << "The diff is: " << diff << std::endl;
    std::cout << "Other diff is: " << other_diff << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;

    int prod{number1 * number2};
    int other_prod = number1 * number2 * number1;

    std::cout << "The prod is: " << prod << std::endl;
    std::cout << "Other prod is: " << other_prod << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;

    int div{number1 / number2};
    int other_div = number1 / number2 / number1;

    std::cout << "The div is: " << div << std::endl;
    std::cout << "Other div is: " << other_div << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;

    int mod{number1 % number2};
    int other_mod = number1 % number2 % number1;

    std::cout << "The mod is: " << mod << std::endl;
    std::cout << "Other mod is: " << other_mod << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;

    return 0;
}