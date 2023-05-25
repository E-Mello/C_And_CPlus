#include <iostream>

int additionNumbers(int firstParam, int secondParam)
{
    int sum = firstParam + secondParam;
    return sum;
}

int subtractionNumbers(int firstNumber, int secondNumber)
{
    int sum = firstNumber - secondNumber;
    return sum;
}

int main(int argc, char **argv)
{
    int firstNumber = 12;
    int secondNumber = 9;
    int subtracion;
    int subtracion02;
    int sum;

    int first_number{3};  // Statement
    int second_number{5}; // Statement

    int sumExample = firstNumber + secondNumber;
    std::cout << "The sumExample of " << firstNumber << " and " << secondNumber << " is " << sumExample << std::endl;

    // =====================

    subtracion = subtractionNumbers(firstNumber, secondNumber);
    std::cout << "The subtraction of " << firstNumber << " and " << secondNumber << " is " << subtracion << std::endl;
    subtracion02 = subtractionNumbers(10, 5);
    std::cout << "The subtraction of 10 and 5 is " << subtracion02 << std::endl;
    // =====================
    sum = additionNumbers(10, 5);

    std::cout << "The sum of 10 and 5 is " << sum << std::endl;

    // =====================

    std::cout << "The last sum example is in stc::cout is: " << additionNumbers(20, 8) << std::endl;

    // =====================

    std::cout << " First Number Example: " << first_number << std::endl;
    std::cout << " Second Number Example: " << second_number << std::endl;
    std::cout << "The sum example using the variables first_number and second_number is: " << additionNumbers(first_number, second_number) << std::endl;

    return 0;
}