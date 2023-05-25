## Acronyms

### std::cout => Printing data to the console(terminal)

```cpp
std::cout << "Hello World!" << std::endl;
std::cout << "The number is: " << 12 << std::endl;
int age {21};
std::cout << "The age is: " << age << std::endl;
```

### std::cin => Reading data from the terminal

```cpp
int age;
std:string name;

std::cout << "Enter your name: ";
std::cin >> name;

std::cout << "Enter your age: ";
std::cin >> age;

std::cout << "Hello" << name << " - you are " << age << " years old" << std::endl;
```

### std::cin => Chaining std::cin

```cpp
int age;
std:string name;

std::cout << "Please type in your name and age, separated by a space: " << std::endl;

std::cin >> name >> age; // Input name and age separated by a space

std::cout << "Hello" << name << " - you are " << age << " years old" << std::endl;
```

### std::cin => Reading data with spaces

```cpp
int age;
std::string completeName;

std::cout << "Please, type in your full name: " << std::endl;
std::getline(std::cin, completeName);

std::cout << "Please, type in your age: " << std::endl;
std::cin >> age;
std::cout << "Hello " << completeName << " - you are " << age << " years old" << std::endl;
```

### std::cerr => Printing error messages to the terminal

```cpp
std::cerr << "std:cerr output: Error message" << std::endl;
```

### std::clog => Printing log messages to the terminal

```cpp
std::clog << "std:clog output: Log message" << std::endl;
```

### std::endl => End of line

```cpp
std::endl;
```

## Variables and Data Types

> int main(){}

    Main function is the entry point of the program

> Entry Point

    Entry point is the first line of code that is executed when the program is run

> Statements

    Statements are instructions that perform a specific action

> Functions

    Functions are a collection of statements that perform a specific action

> Errors

    Errors are mistakes made by the programmer

> Warnings

    Warnings are potential mistakes made by the programmer

> Input

    Input is data that is read from the terminal

> Output

    Output is data that is written to the terminal

> Comments

    Comments are ignored by the compiler and are used to document the code

> Dev Workflow

    Dev Workflow is the process of writing, compiling, and running the code

> Memory Model

    Memory Model is the way the memory is organized and the programmer can interact with it

> Execution Model

    Execution Model is the way the code is executed and the programmer can interact with it

## C++ Types 'common types'

> Int

    Int is a whole number used normally for counting or indexing and represents a 32-bit integer

> Double

    Double is a floating point number used normally for scientific calculations and represents a 64-bit floating point number

> Float

    Float is a floating point number used normally for scientific calculations and represents a 32-bit floating point number and 'float' is a number with a decimal point

> Char

    Char is a single character used normally for storing characters and represents a 8-bit character

> Bool

    Bool is a boolean value used normally for storing true or false and represents a 8-bit boolean value

> Void

    Void is a special type that represents the absence of a type and is used for functions that do not return a value

> Auto

    Auto is a special type that represents the compiler will determine the type of the variable based on the value assigned to it and is used for functions that do not return a value

> ...

## Number Systems 'common number systems'

`Number example: 25 in decimal, 11001 in binary, 31 in octal, 19 in hexad`

> Binary

    Binary is a number system that uses only 0 and 1 and is used by computers to store and process data.

> Octal

    Octal is a number system that uses only 0 to 7 and normally is not used by programmers to represent numbers in code but is used by programmers to represent file permissions when working with Linux.

> Hexadecimal

    Hexadecimal is a number system that uses only 0 to 9 and A to F and normally is not used by programmers to represent numbers in code but is used by programmers to represent memory addresses when working with C++ and is used by programmers to represent colors when working with HTML and CSS.

> Decimal

    Decimal is a number system that uses only 0 to 9 and is used by humans to represent numbers

### Base 10 example

```math
2371 = 2 * 10^3 + 3 * 10^2 + 7 * 10^1 + 1 * 10^0

924 = 9 * 10^2 + 2 * 10^1 + 4 * 10^0

47 = 4 * 10^1 + 7 * 10^0
```

### Base 2 example

```math
100101 = 1 * 2^5 + 0 * 2^4 + 0 * 2^3 + 1 * 2^2 + 0 * 2^1 + 1 * 2^0

10010 = 1 * 2^4 + 0 * 2^3 + 0 * 2^2 + 1 * 2^1 + 0 * 2^0

111 = 1 * 2^2 + 1 * 2^1 + 1 * 2^0
```

### 3 Digits example

| Binary | Decimal |
| ------ | ------- |
| 000    | 0       |
| 001    | 1       |
| 010    | 2       |
| 011    | 3       |
| 100    | 4       |
| 101    | 5       |
| 110    | 6       |
| 111    | 7       |

### 4 Digits example

| Binary | Decimal |
| ------ | ------- |
| 0000   | 0       |
| 0001   | 1       |
| 0010   | 2       |
| 0011   | 3       |
| 0100   | 4       |
| 0101   | 5       |
| 0110   | 6       |
| 0111   | 7       |
| 1000   | 8       |
| 1001   | 9       |
| 1010   | 10      |
| 1011   | 11      |
| 1100   | 12      |
| 1101   | 13      |
| 1110   | 14      |
| 1111   | 15      |

### 5 Digits example

| Binary | Decimal |
| ------ | ------- |
| 00000  | 0       |
| 00001  | 1       |
| 00010  | 2       |
| 00011  | 3       |
| 00100  | 4       |
| 00101  | 5       |
| 00110  | 6       |
| 00111  | 7       |
| 01000  | 8       |
| 01001  | 9       |
| 01010  | 10      |
| 01011  | 11      |
| 01100  | 12      |
| 01101  | 13      |
| 01110  | 14      |
| 01111  | 15      |
| 10000  | 16      |
| 10001  | 17      |
| 10010  | 18      |
| 10011  | 19      |
| 10100  | 20      |
| 10101  | 21      |
| 10110  | 22      |
| 10111  | 23      |
| 11000  | 24      |
| 11001  | 25      |
| 11010  | 26      |
| 11011  | 27      |
| 11100  | 28      |
| 11101  | 29      |
| 11110  | 30      |
| 11111  | 31      |

`We for default group binary numbers in groups of 4 digits and if the number of digits is not a multiple of 4 we add zeros to the left of the number`
`

### Generalization

| Digits | Data Range |
| ------ | ---------- |
| 1      | 0 to 1     |
| 2      | 0 to 3     |
| 3      | 0 to 7     |
| 4      | 0 to 15    |
| 5      | 0 to 31    |
| ...    | ...        |
| n      | 0 to 2^n-1 |

### In practice

| Digits | Bytes | Data Range                      |
| ------ | ----- | ------------------------------- |
| 8      | 1     | 0 to 255                        |
| 16     | 2     | 0 to 65.535                     |
| 32     | 4     | 0 to 34.359.738.367             |
| 64     | 8     | 0 to 18.446.744.073.709.551.615 |
| ...    | ...   | ...                             |

### Hexadecimal System

| Binary                                  | Decimal     | Hexadecimal |
| --------------------------------------- | ----------- | ----------- |
| 0000                                    | 0           | 0           |
| 0001                                    | 1           | 1           |
| 0010                                    | 2           | 2           |
| 0011                                    | 3           | 3           |
| 0100                                    | 4           | 4           |
| 0101                                    | 5           | 5           |
| 0110                                    | 6           | 6           |
| 0111                                    | 7           | 7           |
| 1000                                    | 8           | 8           |
| 1001                                    | 9           | 9           |
| 1010                                    | 10          | A           |
| 1011                                    | 11          | B           |
| 1100                                    | 12          | C           |
| 1101                                    | 13          | D           |
| 1110                                    | 14          | E           |
| 1111                                    | 15          | F           |
| ...                                     | ...         | ...         |
| 0110 1110 0011 0000 1111 0001 0011 1111 | 116.123.903 | 6xE30F13F   |
| ...                                     | ...         | ...         |

### Octal System

| Binary | Decimal | Octal |
| ------ | ------- | ----- |
| 000    | 0       | 0     |
| 001    | 1       | 1     |
| 010    | 2       | 2     |
| 011    | 3       | 3     |
| 100    | 4       | 4     |
| 101    | 5       | 5     |
| 110    | 6       | 6     |
| 111    | 7       | 7     |
| ...    | ...     | ...   |

### Example to use the different numbers systems in c++

```cpp
int number1 = 15; // Decimal
int number2 = 017; // Octal
int number3 = 0x0F; // Hexadecimal
int number4 = 0b00001111; // Binary - C++14

std::cout << "Hello World !" << std::endl;

std::cout << "Number 1: " << number1 << std::endl;
std::cout << "Number 2: " << number2 << std::endl;
std::cout << "Number 3: " << number3 << std::endl;
std::cout << "Number 4: " << number4 << std::endl;
```

## Variables

`Variable is named piece of memory that can store data`

### Variable braced initialization

```cpp
//Variable may contain random garbage value . Warning
int elephant_count;

int lion_count{}; // Initialize to 0

int tiger_count{100}; // Initialize to 100

int monkey_count{15}; // Initialize to 15

//Can use expressions to initialize variables
int domesticated_animals{lion_count + tiger_count + monkey_count};

//Won't compile, the expression in the bracecs uses undeclared variables
int bad_initialization{ doesnt_exist1 + doesnt_exist2 };

// 2.9 is of type double, with a wider range than int. Error or warning.
int narrowing_conversion {2.9};
```

### Functional variable initialization

```cpp
int apple_count(5); // Function declaration

int orange_count(10); // Function declaration

int fruit_count{apple_count + orange_count}; // Function declaration

int bad_initialization{doesnt_exist1 + doesnt_exist2}; // Error or warning

//Information lost. less safe than braced initializers
int narrowing_conversion_functional(2.9);
```

### Assignment Initialization

```cpp
int bike_count = 2;

int truck_count = 7;

int vehicle_count = bike_count + truck_count;

int narrowing_conversion_assignment = 2.9;
```

### Size of type in memory

```cpp
std::cout << "sizeof int: " << sizeof(int) << std::endl;
std::cout << "sizeof truck_count: " << sizeof(truck_count) << std::endl;
```

### General form to declare a variable

```cpp
typename variable_name {initial_value};
```
