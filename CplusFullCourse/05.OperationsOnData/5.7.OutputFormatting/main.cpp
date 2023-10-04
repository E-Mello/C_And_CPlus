#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::endl;
    std::cout << "====================== std:endl ====================== " << std::endl;
    std::cout << std::endl;

    std::cout << "Hello";
    std::cout << "World";

    std::cout << std::endl;

    std::cout << "Hello" << std::endl;
    std::cout << "World" << std::endl;

    std::cout << "-----------------------------------------------------------------------" << std::endl;

    std::cout << "Hello\n";
    std::cout << "World\n";

    std::cout << std::endl;
    std::cout << "====================== std:flush ====================== " << std::endl;
    std::cout << std::endl;

    // std::flush : flushes the output buffer to its final destination.
    std::cout << "This is a nice message...." << std::endl
              << std::flush;
    // After this std:flush, we're sure that at this line, the message has been sent to the stream.
    // This may be important in some applications.

    std::cout << std::endl;
    std::cout << "====================== std:setw ====================== " << std::endl;
    std::cout << std::endl;

    int col_width{14};

    std::cout << "Unformatted table: " << std::endl;
    std::cout << "Daniel"
              << " "
              << "Jacks " << 100 << std::endl;
    std::cout << "James"
              << " "
              << "Smith " << 200 << std::endl;
    std::cout << "Frank"
              << " "
              << "Jones " << 300 << std::endl;
    std::cout << "Larry"
              << " "
              << "Jones " << 400 << std::endl;
    std::cout << "Jill"
              << " "
              << "Smith " << 500 << std::endl;
    std::cout << "Jane"
              << " "
              << "Jacks " << 600 << std::endl;

    std::cout << std::endl;
    std::cout << "Formatted table: " << std::endl;

    std::cout << std::setw(col_width) << "Name" << std::setw(col_width) << "Surname" << std::setw(col_width) << "Score" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Jacks" << std::setw(col_width) << 100 << std::endl;
    std::cout << std::setw(col_width) << "James" << std::setw(col_width) << "Smith" << std::setw(col_width) << 200 << std::endl;
    std::cout << std::setw(col_width) << "Frank" << std::setw(col_width) << "Jones" << std::setw(col_width) << 300 << std::endl;
    std::cout << std::setw(col_width) << "Larry" << std::setw(col_width) << "Jones" << std::setw(col_width) << 400 << std::endl;
    std::cout << std::setw(col_width) << "Jill" << std::setw(col_width) << "Smith" << std::setw(col_width) << 500 << std::endl;
    std::cout << std::setw(col_width) << "Jane" << std::setw(col_width) << "Jacks" << std::setw(col_width) << 600 << std::endl;

    std::cout << std::endl;
    // Rigth Justified
    std::cout << "Right Justified table (default) :" << std::endl;
    col_width = 20;

    std::cout << std::right;
    std::cout << std::setw(col_width) << "Name" << std::setw(col_width) << "Surname" << std::setw(col_width) << "Score" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Jacks" << std::setw(col_width) << 100 << std::endl;
    std::cout << std::setw(col_width) << "James" << std::setw(col_width) << "Smith" << std::setw(col_width) << 200 << std::endl;
    std::cout << std::setw(col_width) << "Frank" << std::setw(col_width) << "Jones" << std::setw(col_width) << 300 << std::endl;
    std::cout << std::setw(col_width) << "Larry" << std::setw(col_width) << "Jones" << std::setw(col_width) << 400 << std::endl;

    std::cout << std::endl;
    // Left Justified
    std::cout << "Left Justified table (default) :" << std::endl;
    col_width = 20;

    std::cout << std::left;
    std::cout << std::setw(col_width) << "Name" << std::setw(col_width) << "Surname" << std::setw(col_width) << "Score" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Jacks" << std::setw(col_width) << 100 << std::endl;
    std::cout << std::setw(col_width) << "James" << std::setw(col_width) << "Smith" << std::setw(col_width) << 200 << std::endl;
    std::cout << std::setw(col_width) << "Frank" << std::setw(col_width) << "Jones" << std::setw(col_width) << 300 << std::endl;
    std::cout << std::setw(col_width) << "Larry" << std::setw(col_width) << "Jones" << std::setw(col_width) << 400 << std::endl;

    std::cout << std::endl;
    // Internal Justified
    // internal justified : sign is left justified, data is right justified
    std::cout << "Internal Justified" << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;

    std::cout << std::endl;
    std::cout << "====================== std:setw ====================== " << std::endl;
    std::cout << std::endl;

    col_width = 25;

    std::cout << std::setfill('-'); // set fill character to '-'
    std::cout << std::setw(col_width) << "Name" << std::setw(col_width) << "Surname" << std::setw(col_width) << "Score" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Jacks" << std::setw(col_width) << 100 << std::endl;
    std::cout << std::setw(col_width) << "James" << std::setw(col_width) << "Smith" << std::setw(col_width) << 200 << std::endl;
    std::cout << std::setw(col_width) << "Frank" << std::setw(col_width) << "Jones" << std::setw(col_width) << 300 << std::endl;
    std::cout << std::setw(col_width) << "Larry" << std::setw(col_width) << "Jones" << std::setw(col_width) << 400 << std::endl;

    std::cout << std::endl;
    std::cout << "====================== std:boolalpha and std:noboolalpha ====================== " << std::endl;
    std::cout << std::endl;

    bool condition{true};
    bool other_condition{false};

    std::cout << "Condition: " << condition << std::endl;
    std::cout << "Other Condition: " << other_condition << std::endl;

    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "Condition: " << condition << std::endl;
    std::cout << "Other Condition: " << other_condition << std::endl;

    std::cout << std::endl;
    std::cout << std::noboolalpha;
    std::cout << "Condition: " << condition << std::endl;
    std::cout << "Other Condition: " << other_condition << std::endl;

    std::cout << std::endl;
    std::cout << "====================== std::showpos and std::noshowpos ====================== " << std::endl;
    std::cout << std::endl;

    int pos_num{34};
    int neg_num{-45};

    std::cout << "pos_num: " << pos_num << std::endl;
    std::cout << "neg_num: " << neg_num << std::endl;

    std::cout << std::endl;
    std::cout << std::showpos;
    std::cout << "pos_num: " << pos_num << std::endl;
    std::cout << "neg_num: " << neg_num << std::endl;

    std::cout << std::endl;
    std::cout << std::noshowpos;
    std::cout << "pos_num: " << pos_num << std::endl;
    std::cout << "neg_num: " << neg_num << std::endl;

    std::cout << std::endl;
    std::cout << "====================== std::dec std::oct and std::hex ====================== " << std::endl;
    std::cout << std::endl;

    int pos_int{255};
    int neg_int{-255};
    double double_var{498.32};

    std::cout << std::endl;
    std::cout << "pos_int: " << pos_int << std::endl;
    std::cout << "neg_int: " << neg_int << std::endl;
    std::cout << "double_var: " << double_var << std::endl;

    std::cout << std::endl;
    std::cout << "pos_int in different bases: " << std::endl;
    std::cout << "pos_int (dec): " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex): " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct): " << std::oct << pos_int << std::endl;

    std::cout << std::endl;
    std::cout << "neg_int in different bases: " << std::endl;
    std::cout << "neg_int (dec): " << std::dec << neg_int << std::endl;
    std::cout << "neg_int (hex): " << std::hex << neg_int << std::endl;
    std::cout << "neg_int (oct): " << std::oct << neg_int << std::endl;

    std::cout << std::endl;
    std::cout << "double_var in different bases: " << std::endl;
    std::cout << "double_var (dec): " << std::dec << double_var << std::endl;
    std::cout << "double_var (hex): " << std::hex << double_var << std::endl;
    std::cout << "double_var (oct): " << std::oct << double_var << std::endl;

    std::cout << std::endl;
    std::cout << "====================== std::showbase and uppercase ====================== " << std::endl;
    std::cout << std::endl;

    pos_int = 717171;

    std::cout << "pos_int (noshowbase : default) : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

    std::cout << "pos_int (showbase) : " << std::endl;
    std::cout << std::showbase;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

    std::cout << "pos_int (uppercase) : " << std::endl;
    std::cout << std::uppercase;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

    std::cout << std::endl;
    std::cout << "====================== std::scientific and std::fixed ====================== " << std::endl;
    std::cout << std::endl;

    double a{3.1415926535897932384626433832795};
    double b{2006.0};
    double c{1.34e-10};

    std::cout << std::endl;
    std::cout << "double values (default) : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (scientific) : " << std::endl;
    std::cout << std::scientific;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (fixed) : " << std::endl;
    std::cout << std::fixed;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (back to defaults) : " << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "====================== std::setprecision ====================== " << std::endl;
    std::cout << std::endl;

    a = 3.1415926535897932384626433832795;

    std::cout << std::endl;
    std::cout << "a (default precision(6)) : " << a << std::endl;
    std::cout << std::setprecision(10);
    std::cout << "a (precision(10)) : " << a << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "a (precision(20)) : " << a << std::endl;
    std::cout << std::setprecision(50);
    std::cout << "a (precision(50)) : " << a << std::endl;

    // Reset precision to 6
    std::cout << std::setprecision(6) << std::endl;

    std::cout << std::endl;
    std::cout << "====================== std::showpoint ====================== " << std::endl;
    std::cout << std::endl;

    double d{34.12};
    double e{101.99};
    double f{12.0};
    int g{45};

    std::cout << std::endl;
    std::cout << "noshowpoint (default) : " << std::endl;
    std::cout << "d :" << d << std::endl;
    std::cout << "e :" << e << std::endl;
    std::cout << "f :" << f << std::endl;
    std::cout << "g :" << g << std::endl;

    std::cout << std::endl;
    std::cout << "showpoint : " << std::endl;
    std::cout << std::showpoint;
    std::cout << "d :" << d << std::endl;
    std::cout << "e :" << e << std::endl;
    std::cout << "f :" << f << std::endl;
    std::cout << "g :" << g << std::endl;

    return 0;
}