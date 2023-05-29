#include <iostream>
#include <cmath>

int main()
{

    double weight{7.7};

    // floor
    std::cout << "Weight rounded to floor is: " << std::floor(weight) << std::endl;

    // ceil
    std::cout << "Weight rounded to ceil is: " << std::ceil(weight) << std::endl;

    // abs
    double savings{-5000};

    std::cout << "Abs of weight is: " << std::abs(weight) << std::endl;
    std::cout << "Abs of savings is: " << std::abs(savings) << std::endl;

    // exp: f(x) = e^x, whe e is Euler's number (2.71828...) Test the result with a calculator
    double exponential = std::exp(10);
    std::cout << "Exponential of 10 is: " << exponential << std::endl;

    // pow
    std::cout << "3 ^ 4 is: " << std::pow(3, 4) << std::endl;
    std::cout << "9 ^ 3 is: " << std::pow(9, 3) << std::endl;

    // log : reverse function of pow. if 2^x = 8, then log2(8) = x
    //  log is a function that returns the natural logarithm of a number
    std::cout << "log2(8) is: " << std::log2(8) << std::endl;

    // sqrt
    // sqrt is a function that returns the square root of a number
    std::cout << "sqrt(64) is: " << std::sqrt(64) << std::endl;

    return 0;
}