#include <iostream>

int main()
{
    std::cout << "------------------------------------------------------------------------" << std::endl;
    int var1{123};
    std::cout << "var1: " << var1 << std::endl; // will print 123

    var1 = 12;                                  // Assign
    std::cout << "var1: " << var1 << std::endl; // will print 12

    std::cout << "------------------------------------------------------------------------" << std::endl;

    double var2{44.55};
    std::cout << "var2: " << var2 << std::endl; // will print 44.55

    var2 = 33.44;                               // Assign
    std::cout << "var2: " << var2 << std::endl; // will print 33.44

    std::cout << "------------------------------------------------------------------------" << std::endl;

    bool state{false};
    std::cout << std::boolalpha;
    std::cout << "state: " << state << std::endl; // will print false

    state = true;                                 // Assign
    std::cout << "state: " << state << std::endl; // will print true

    std::cout << "------------------------------------------------------------------------" << std::endl;

    // Careful about auto assignments
    auto var3{333u}; // Declare and initialize with type deduction

    var3 = -22; // Assign negative number. Danger!

    std::cout << "var3: " << var3 << std::endl; // will print 4294967274

    std::cout << "------------------------------------------------------------------------" << std::endl;

    return 0;
}