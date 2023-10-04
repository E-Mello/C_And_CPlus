#include <iostream>

int main()
{
    int a{6};
    int b{3};
    int c{2};
    int d{4};
    int e{1};
    int f{5};
    int g{7};

    int result = a + b * c - d / e - f + g;

    std::cout << "Result: " << result << std::endl;

    result = a / b * c + d - e + f;

    std::cout << "Result: " << result << std::endl;

    // more clean for udenstanding
    result = a + (b * c) - (d / e) - f + g;

    std::cout << "Result: " << result << std::endl;

    result = ((a / b) * c) + d - (e + f);

    std::cout << "Result: " << result << std::endl;

    return 0;
}