#include <iostream>

using namespace std;

int main()
{
    int number1 = 15;         // Decimal
    int number2 = 017;        // Octal
    int number3 = 0x0F;       // Hexadecimal
    int number4 = 0b00001111; // Binary - C++14

    cout << "Hello World !" << endl;

    cout << "Number 1: " << number1 << endl;
    cout << "Number 2: " << number2 << endl;
    cout << "Number 3: " << number3 << endl;
    cout << "Number 4: " << number4 << endl;
    return 0;
}