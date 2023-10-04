#include <iostream>

int main()
{
    // Declare aand initialize pointer
    int *p_number{}; // Will initialize with nullptr
    double *p_fractional_number{};

    // Explicitly initialize with nullptr
    int *p_number2{nullptr};
    double *p_fractional_number2{nullptr};

    // Pointer to different variables are of the same size
    std::cout << "sizeof(int) " << sizeof(int) << std::endl;
    std::cout << "sizeof(double) " << sizeof(double) << std::endl;
    std::cout << "sizeof(int*) " << sizeof(int *) << std::endl;
    std::cout << "sizeof(double*) " << sizeof(double *) << std::endl;
    std::cout << "sizeof(p_number*) " << sizeof(p_number) << std::endl;
    std::cout << "sizeof(p_fractional_number) " << sizeof(p_fractional_number) << std::endl;

    std::cout << "-----------------------------------------------------------------------------------" << std::endl;

    // Initializing pointer and assigning them data
    // We know that pointers store addresses of variables
    int int_var{43};
    int *p_int{&int_var}; // The address of operator (&)

    std::cout << "int_var: " << int_var << std::endl;
    std::cout << "p_int (Address in memory): " << p_int << std::endl;

    // You can also change the address stored in a pointer any time
    int int_var1{65};
    p_int = &int_var1;
    std::cout << "p_int (with a different address): " << p_int << std::endl;

    // Can't cross assign between pointers of different types
    int *p_int2{&int_var1};
    double double_var{33};

    // p_int = &double_var; // This will give an error

    // Dereferencing pointers
    int *p_int3{nullptr};
    int int_data{53};
    p_int3 = &int_data;

    std::cout << "value: " << *p_int2 << std::endl; // Dereferencing pointers

    return 0;
}