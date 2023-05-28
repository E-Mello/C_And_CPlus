#include <iostream>

using namespace std;

int main()
{
    // int value1{10};
    // int value2{-300};

    signed int value1{10};
    signed int value2{-300};

    cout << "value1: " << value1 << endl;
    cout << "value2: " << value2 << endl;
    cout << "sizeof value1: " << sizeof(value1) << endl;
    cout << "sizeof value2: " << sizeof(value2) << endl;

    unsigned int value3{20};
    // unsigned int value4{-200}; // Compiler error

    cout << "value3: " << value3 << endl;
    // cout << "value4: " << value4 << endl;
    cout << "sizeof value3: " << sizeof(value3) << endl;
    // cout << "sizeof value4: " << sizeof(value4) << endl;

    // short and long
    short short_var{-32768};                    // 2 Bytes
    short int short_int{455};                   // 2 Bytes
    signed short signed_short{122};             // 2 Bytes
    signed short int signed_short_int{-456};    // 2 Bytes
    unsigned short int unsigned_short_int{456}; // 2 Bytes

    int int_var{55};                   // 4 Bytes
    signed signed_var{55};             // 4 Bytes
    signed int signed_int_var{55};     // 4 Bytes
    unsigned unsigned_var{55};         // 4 Bytes
    unsigned int unsigned_int_var{55}; // 4 Bytes

    long long_var{55};                           // 4 Bytes
    long int long_int_var{55};                   // 4 Bytes
    signed long signed_long_var{55};             // 4 Bytes
    signed long int signed_long_int_var{55};     // 4 Bytes
    unsigned long unsigned_long_var{55};         // 4 Bytes
    unsigned long int unsigned_long_int_var{55}; // 4 Bytes

    long long long_long_var{555};                           // 8 Bytes
    long long int long_long_int_var{666};                   // 8 Bytes
    signed long long signed_long_long_var{777};             // 8 Bytes
    signed long long int signed_long_long_int_var{888};     // 8 Bytes
    unsigned long long unsigned_long_long_var{999};         // 8 Bytes
    unsigned long long int unsigned_long_long_int_var{995}; // 8 Bytes

    cout << "-------------------------------------------------------------------------------" << endl;

    cout << "short_var: " << short_var << ", size: " << sizeof(short) << " bytes" << endl;
    cout << "short_int: " << short_int << ", size: " << sizeof(short int) << " bytes" << endl;
    cout << "signed_short: " << signed_short << ", size: " << sizeof(signed short) << " bytes" << endl;
    cout << "signed_short_int: " << signed_short_int << ", size: " << sizeof(signed short int) << " bytes" << endl;
    cout << "unsigned_short_int: " << unsigned_short_int << ", size: " << sizeof(unsigned short int) << " bytes" << endl;

    cout << "-------------------------------------------------------------------------------" << endl;

    cout << "int_var: " << int_var << ", size: " << sizeof(int) << " bytes" << endl;
    cout << "signed_var: " << signed_var << ", size: " << sizeof(signed) << " bytes" << endl;
    cout << "signed_int_var: " << signed_int_var << ", size: " << sizeof(signed int) << " bytes" << endl;
    cout << "unsigned_var: " << unsigned_var << ", size: " << sizeof(unsigned) << " bytes" << endl;
    cout << "unsigned_int_var: " << unsigned_int_var << ", size: " << sizeof(unsigned int) << " bytes" << endl;

    cout << "-------------------------------------------------------------------------------" << endl;

    cout << "long_var: " << long_var << ", size: " << sizeof(long) << " bytes" << endl;
    cout << "long_int_var: " << long_int_var << ", size: " << sizeof(long int) << " bytes" << endl;
    cout << "signed_long_var: " << signed_long_var << ", size: " << sizeof(signed long) << " bytes" << endl;
    cout << "signed_long_int_var: " << signed_long_int_var << ", size: " << sizeof(signed long int) << " bytes" << endl;
    cout << "unsigned_long_var: " << unsigned_long_var << ", size: " << sizeof(unsigned long) << " bytes" << endl;
    cout << "unsigned_long_int_var: " << unsigned_long_int_var << ", size: " << sizeof(unsigned long int) << " bytes" << endl;

    cout << "-------------------------------------------------------------------------------" << endl;

    cout << "long_long_var: " << long_long_var << ", size: " << sizeof(long long) << " bytes" << endl;
    cout << "long_long_int_var: " << long_long_int_var << ", size: " << sizeof(long long int) << " bytes" << endl;
    cout << "signed_long_long_var: " << signed_long_long_var << ", size: " << sizeof(signed long long) << " bytes" << endl;
    cout << "signed_long_long_int_var: " << signed_long_long_int_var << ", size: " << sizeof(signed long long int) << " bytes" << endl;
    cout << "unsigned_long_long_var: " << unsigned_long_long_var << ", size: " << sizeof(unsigned long long) << " bytes" << endl;
    cout << "unsigned_long_long_int_var: " << unsigned_long_long_int_var << ", size: " << sizeof(unsigned long long int) << " bytes" << endl;

    cout << "-------------------------------------------------------------------------------" << endl;

    return 0;
}