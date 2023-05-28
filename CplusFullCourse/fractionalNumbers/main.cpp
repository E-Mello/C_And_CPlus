#include <iostream>
#include <iomanip>

int main()
{

    float number1{1.1234561234578913456f};
    double number2{1.12345678913456};
    long double number3{1.12345678913456L};

    // float number4{19240023}; // Compiler error
    float number5(192400023);
    number5 = number5 + 1;
    std::cout << "number5 is: " << number5 << std::endl; // 192400024

    std::cout << "-------------------------------------------------------------------------------" << std::endl;

    // Scientific notation
    double number6{192240023};
    double number7{1.92400023e8};
    double number8{1.924e8};
    double number9{0.00000000003498};
    double number10{3.498e-11};

    std::cout << "Number 6: " << number6 << std::endl;
    std::cout << "Number 7: " << number7 << std::endl;
    std::cout << "Number 8: " << number8 << std::endl;
    std::cout << "Number 9: " << number9 << std::endl;
    std::cout << "Number 10: " << number10 << std::endl;

    std::cout << "-------------------------------------------------------------------------------" << std::endl;

    // Precision
    std::cout << std::setprecision(20);                                       // Control the precision of the output
    std::cout << "Number 1: " << number1 << sizeof(float) << std::endl;       // 7 digits of precision
    std::cout << "Number 2: " << number2 << sizeof(double) << std::endl;      // 15 digits of precision
    std::cout << "Number 3: " << number3 << sizeof(long double) << std::endl; // 15+ digits of precision

    std::cout << "-------------------------------------------------------------------------------" << std::endl;

    // Float problems: The precision is usually too limited
    // for a lot of applications
    float number30 = 192400023.0f; // Error: narrowing conversion

    std::cout << "Number 30: " << number30 << std::endl;

    std::cout << "-------------------------------------------------------------------------------" << std::endl;

    double number20{5.6};
    double number21{};
    double number22{};

    // Infinity
    double result{number20 / number21};

    std::cout << number20 << " / " << number21 << " yields " << result << std::endl;
    std::cout << result << "+" << number20 << " yields " << result + number20 << std::endl;

    // NaN
    result = number21 / number22;

    std::cout << number22 << " / " << number21 << " = " << result << std::endl;

    std::cout << "-------------------------------------------------------------------------------" << std::endl;

    return 0;
}