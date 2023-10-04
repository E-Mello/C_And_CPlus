#include <iostream>

int main()
{
    std::cout << "-------------------------------------------------------------------------------" << std::endl;

    bool a{true};
    bool b{false};
    bool c{true};

    std::cout << std::boolalpha;
    std::cout << "a is: " << a << std::endl;
    std::cout << "b is: " << b << std::endl;
    std::cout << "c is: " << c << std::endl;

    // AND : Evaluates to true when all operands are true.
    //  A single false operand will drag
    //  the entire expression to evaluating false

    std::cout << "-------------------------------------------------------------------------------" << std::endl;
    std::cout << "Basic AND operations" << std::endl;

    std::cout << "(a && b) is: " << (a && b) << std::endl;
    std::cout << "(a && c) is: " << (a && c) << std::endl;
    std::cout << "(a && b && c) is: " << (a && b && c) << std::endl;

    // OR : Evaluates to true when any one of the operands is true.
    //  A single true operand will drag
    //  the entire expression to evaluating true

    std::cout << "-------------------------------------------------------------------------------" << std::endl;
    std::cout << "Basic OR operations" << std::endl;

    std::cout << "(a || b) is: " << (a || b) << std::endl;
    std::cout << "(a || c) is: " << (a || c) << std::endl;
    std::cout << "(a || b || c) is: " << (a || b || c) << std::endl;

    // NOT : Evaluates to true when the operand is false

    std::cout << "-------------------------------------------------------------------------------" << std::endl;
    std::cout << "Basic NOT operations" << std::endl;

    std::cout << "(!a) is: " << (!a) << std::endl;
    std::cout << "(!b) is: " << (!b) << std::endl;
    std::cout << "(!c) is: " << (!c) << std::endl;

    // Combine logical operators in expression
    std::cout << "!(a && b) || c is: " << (!(a && b) || c) << std::endl;

    std::cout << "-------------------------------------------------------------------------------" << std::endl;

    int d{45};
    int e{20};
    int f{11};

    std::cout << "-------------------------------------------------------------------------------" << std::endl;
    std::cout << "Relational and logic operations on integers" << std::endl;
    std::cout << "d is: " << d << std::endl;
    std::cout << "e is: " << e << std::endl;
    std::cout << "f is: " << f << std::endl;

    std::cout << "-------------------------------------------------------------------------------" << std::endl;

    std::cout << "(d > e) && (d > f) is: " << ((d > e) && (d > f)) << std::endl;
    std::cout << "(d == e) || (e <= f) is: " << ((d == e) || (e <= f)) << std::endl;
    std::cout << "(d < e) || (d > f) is: " << ((d < e) || (d > f)) << std::endl;
    std::cout << "(f > e) || (d < f) is: " << ((f > e) && (d < f)) << std::endl;
    std::cout << "(d > f) && (f <= d) is: " << ((d > f) && (f <= d)) << std::endl;
    std::cout << "(d > e) && (d <= f) is: " << ((d > e) && (d <= f)) << std::endl;
    std::cout << "(! a) && (d == e) is: " << ((!a) && (d == e)) << std::endl;
    std::cout << "(! a) && (d == e) is: " << ((!a) && (d == e)) << std::endl;

    return 0;
}