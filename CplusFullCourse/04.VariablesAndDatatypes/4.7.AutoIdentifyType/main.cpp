#include <iostream>

int main()
{
    std::cout << "------------------------------------------------------------------------" << std::endl;

    auto var1{12};
    auto var2{12.0};
    auto var3{12.0f};
    auto var4{12L};
    auto var5{'e'};

    // int modifier suffixes
    auto var6{123u};  // unsigned int
    auto var7{123ul}; // long
    auto var8{123ll}; // unsigned long long

    std::cout << "var1 occupies: " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "var2 occupies: " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "var3 occupies: " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "var4 occupies: " << sizeof(var4) << " bytes" << std::endl;
    std::cout << "var5 occupies: " << sizeof(var5) << " bytes" << std::endl;

    std::cout << "------------------------------------------------------------------------" << std::endl;

    std::cout << "var6 occupies: " << sizeof(var6) << " bytes" << std::endl;
    std::cout << "var7 occupies: " << sizeof(var7) << " bytes" << std::endl;
    std::cout << "var8 occupies: " << sizeof(var8) << " bytes" << std::endl;

    std::cout << "------------------------------------------------------------------------" << std::endl;

    return 0;
}