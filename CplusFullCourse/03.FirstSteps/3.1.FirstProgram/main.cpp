#include <iostream>

consteval int get_value()
{
    return 5;
}

const int get_value2()
{
    return 10;
}

const float get_value3()
{
    return 10.5;
}

float get_value4(float num1, float num2)
{
    float total = num1 + num2;
    return total;
}

int main()
{
    constexpr int value = get_value();
    int num1;
    int num2;
    std::cout << "value: " << value << std::endl;
    std::cout << "value2: " << get_value2() << std::endl;
    std::cout << "value3: " << get_value3() << std::endl;
    std::cout << "Enter two numbers for sum" << std::endl;
    std::cout << "Number 1: ";
    std::cin >> num1;
    std::cout << "Number 2: ";
    std::cin >> num2;
    float total = get_value4(num1, num2);
    std::cout << "The sum of two values is: " << total << std::endl;
}
