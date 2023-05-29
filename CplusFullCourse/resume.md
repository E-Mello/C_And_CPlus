# Chapter 1 - Getting Started

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

## Positives and negatives numbers

```cpp
int value1 {10}; //
int value2 {-300}; //
```

### Signed integers and unsigned integers

```cpp
signed int value1 {30}; // Signed integer
signed int value2 {-30}; // Signed integer
```

```cpp
unsigned int value1 {30}; // Unsigned integer
unsigned int value2 {-30}; // Error
```

> unsigned range: 0 to 2^n-1
> signed range: -2^(n-1) to 2^(n-1)-1

| Type with modifier | Bytes in memory | Range of values                                         |
| ------------------ | --------------- | ------------------------------------------------------- |
| unsigned char      | 1               | 0 to 255                                                |
| signed char        | 1               | -128 to 127                                             |
| unsigned int       | 4               | 0 to 4.294.967.295                                      |
| signed int         | 4               | -2.147.483.648 to 2.147.483.647                         |
| unsigned short     | 2               | 0 to 65.535                                             |
| signed short       | 2               | -32.768 to 32.767                                       |
| unsigned long      | 8               | 0 to 18.446.744.073.709.551.615                         |
| signed long        | 8               | -9.223.372.036.854.775.808 to 9.223.372.036.854.775.807 |

`These modifiers only apply to integral types: those in which you can store decimal numbers`

## Fractional Numbers

### Floating Point Types

> used to represent numbeers with a fractional part in C++

> Precision is basically the number of bits you can represent with that type starting from the decimal point

| Type        | Size     | Precision | Comment              |
| ----------- | -------- | --------- | -------------------- |
| float       | 4 bytes  | 7         | -                    |
| double      | 8 bytes  | 15        | Recommmended default |
| long        | 8 bytes  | 15        | -                    |
| long double | 12 bytes | > double  | -                    |

> Example of how we can declare and initialize floating point variables

```cpp
// Precision
std::cout << std::setprecision(20); // 20 digits of precision

//Declare and initialize the variables
float number1{1.12345678913456f};
double number2{1.12345678913456};
long double number3{1.12345678913456L};

float number4{19240023}; // Compiler error, too big for a float
float number5(192400023);
number5 = number5 + 1;
std::cout << "number5 is: " << number5 << std::endl; // 192400024

// Scientific notation
double number6{192240023};
double number7{1.92400023e8};
double number8{1.924e8};
double number9{0.00000000003498};
double number10{3.498e-11};

std::cout << "Number 1: " << number1 << sizeof(float) << std::endl; // 7 digits of precision
std::cout << "Number 2: " << number2 << sizeof(double) << std::endl; // 15 digits of precision
std::cout << "Number 3: " << number3 << sizeof(long double) << std::endl; // 15+ digits of precision
```

### IEEE 754 Floating Point Standard

> Floating point numbers memory representation
> https://en.wikipedia.org/wiki/IEEE_754

> n(floating point)/0 = infinity(+/-)
> 0.0/0.0 = NaN (Not a Number)

```cpp
double number11{5.6};
double number12{};
double number13{};

// Infinity
double result {number11 / number12};

std::cout << number11 << " / " << number12 << " yields " << result << std::endl;
std::cout << result << "+" << number11 << "yield " << result + number11 << std::endl;

// NaN
result = number13 / number12;

std::cout << number13 << " / " << number12 << " = " << result << std::endl;
```

> Remember the suffixes when initializing floating point variables, otherwise the default will be double

> Double works well in many situations, so you will see it used a lot

## Boolean

> Boolean type is used to represent true or false

```cpp
bool red_light{true};
bool green_light{false};

if (red_light == true) {
  std::cout << "Stop" << std::endl;
} else if (green_light) {
  std::cout << "Go" << std::endl;
} else {
  std::cout << "Proceed with caution" << std::endl;
}

if(green_light) {
    std::cout << "The light is green" << std::endl;
} else {
    std::cout << "The light is not green" << std::endl;
}

//Printing out a bool
//1 -->> true
//0 -->> false
std::cout << std::endl;
std::cout << "red_light is: " << red_light << std::endl;
std::cout << "green_light is: " << green_light << std::endl;

//Print out true and false
std::cout << std::endl;
std::cout << std::boolalpha; // Forces the output format to true/false
std::cout << "red_light is: " << red_light << std::endl;
std::cout << "green_light is: " << green_light << std::endl;
```

> A byte can store 256 different values

> Using it just to cover two states (true/false) is wasteful, especially for devices with a hard memory constraints (think embedded devices)

> There are techniques to pack even more data into a byte. Wel'll learn more about these in a few upcoming chapters

## Character and Text

> Character type is used to represent single characters

```cpp
char character1{'a'};
char character2{'b'};
char character3{'c'};
char character4{'d'};
char character5{'e'};

std::cout << "character 1 is: " << character1 << std::endl;
std::cout << "character 2 is: " << character2 << std::endl;
std::cout << "character 3 is: " << character3 << std::endl;
std::cout << "character 4 is: " << character4 << std::endl;
std::cout << "character 5 is: " << character5 << std::endl;
```

> 1 byte: 256 different values (0 to 255) or (-128 to 127) 'Each matched to some character'

> ASCII: American Standard Code for Information Interchange

| Dec | Char                        | Dec | Char    | Dec | Char | Dec | Char |
| --- | --------------------------- | --- | ------- | --- | ---- | --- | ---- |
| 0   | NULL (null)                 | 32  | (space) | 64  | @    | 96  | `    |
| 1   | SOH (start of heading)      | 33  | !       | 65  | A    | 97  | a    |
| 2   | STX (start of text)         | 34  | "       | 66  | B    | 98  | b    |
| 3   | ETX (end of text)           | 35  | #       | 67  | C    | 99  | c    |
| 4   | EOT (end of transmit)       | 36  | $       | 68  | D    | 100 | d    |
| 5   | ENQ (enquiry)               | 37  | %       | 69  | E    | 101 | e    |
| 6   | ACK (acknowledge)           | 38  | &       | 70  | F    | 102 | f    |
| 7   | BEL (bell)                  | 39  | '       | 71  | G    | 103 | g    |
| 8   | BS (backspace)              | 40  | (       | 72  | H    | 104 | h    |
| 9   | TAB (horizontal tab)        | 41  | )       | 73  | I    | 105 | i    |
| 10  | LF (NL line feed, new line) | 42  | \*      | 74  | J    | 106 | j    |
| 11  | VT (vertical tab)           | 43  | +       | 75  | K    | 107 | k    |
| 12  | FF (NP form feed, new page) | 44  | ,       | 76  | L    | 108 | l    |
| 13  | CR (carriage return)        | 45  | -       | 77  | M    | 109 | m    |
| 14  | SO (shift out)              | 46  | .       | 78  | N    | 110 | n    |
| 15  | SI (shift in)               | 47  | /       | 79  | O    | 111 | o    |
| 16  | DLE (data link escape)      | 48  | 0       | 80  | P    | 112 | p    |
| 17  | DC1 (device control 1)      | 49  | 1       | 81  | Q    | 113 | q    |
| 18  | DC2 (device control 2)      | 50  | 2       | 82  | R    | 114 | r    |
| 19  | DC3 (device control 3)      | 51  | 3       | 83  | S    | 115 | s    |
| 20  | DC4 (device control 4)      | 52  | 4       | 84  | T    | 116 | t    |
| 21  | NAK (negative acknowledge)  | 53  | 5       | 85  | U    | 117 | u    |
| 22  | SYN (synchronous idle)      | 54  | 6       | 86  | V    | 118 | v    |
| 23  | ETB (end of trans. block)   | 55  | 7       | 87  | W    | 119 | w    |
| 24  | CAN (cancel)                | 56  | 8       | 88  | X    | 120 | x    |
| 25  | EM (end of medium)          | 57  | 9       | 89  | Y    | 121 | y    |
| 26  | SUB (substitute)            | 58  | :       | 90  | Z    | 122 | z    |
| 27  | ESC (escape)                | 59  | ;       | 91  | [    | 123 | {    |
| 28  | FS (file separator)         | 60  | <       | 92  | \\   | 124 | \|   |
| 29  | GS (group separator)        | 61  | =       | 93  | ]    | 125 | }    |
| 30  | RS (record separator)       | 62  | >       | 94  | ^    | 126 | ~    |
| 31  | US (unit separator)         | 63  | ?       | 95  | \_   | 127 | DEL  |

> It is possible to assgn a valid ASCII code to a char variable, and the corresponding chaaracter will b e stored in. You can choose to interpret that either as a character or a regular integral value

```cpp
char value = 65; // ASCII code for 'A'
std::cout <<"value: " << value << std::endl; // will print 'A'
std::cout <<"value(int): " << static_cast<int>(value) << std::endl; // will print 65
```

> ASCII was among the first encodings to represent text in a computer.

> It fails short when it comes to representing languages other than English and a few western languages. Think Arabic, East Asian Languages like Japanese, Chinese, Korean, etc.

> There are better ways to represent text thaat is meant to be seen in different languages, one of the most common being Unicode

> The details of Unicode are out of scope for this course, just know that it's a robust way to represent text in different languages for a computer.

## Auto

> auto : Let the compiler deduce the type

```cpp
auto var1{12};
auto var2{12.0};
auto var3{12.0f};
auto var4{12L};
auto var5{'e'};

//int modifier suffixes
auto var6{123u};// unsigned int
auto var7{123ul};// long
auto var8{123ll};// unsigned long long
```

## Assignments

> Assignment operators are used to assign values to variables.

```cpp
int var1{123};
std::cout << "var1: " << var1 << std::endl; // will print 123

var1 = 12; // Assign
std::cout << "var1: " << var1 << std::endl; // will print 12

double var2{44.55};
std::cout << "var2: " << var2 << std::endl; // will print 44.55

var2 = 33.44; // Assign
std::cout << "var2: " << var2 << std::endl; // will print 33.44

bool state{false};
std::cout << std::boolalpha;
std::cout << "state: " << state << std::endl; // will print false

state = true; // Assign
std::cout << "state: " << state << std::endl; // will print true

//Careful about auto assignments
auto var3{333u}; // Declare and initialize with type deduction

var3 = -22; // Assign negative number. Danger!

std::cout << "var3: " << var3 << std::endl; // will print 4294967274
```

# Chaper 2 - Operations on data

## Basic operations

### Addition

```cpp
// Addition
int sum {number1 + number2};
int other_sum = number1 + number2 + number1;

std::cout << "The sum is: " << sum << std::endl;
std::cout <<"Other sum is: " << other_sum << std::endl;
```

### Subtraction

```cpp
// Subtraction
int diff {number1 - number2};
int other_diff = number1 - number2 - number1;

std::cout << "The diff is: " << diff << std::endl;
std::cout <<"Other diff is: " << other_diff << std::endl;
```

### Multiplication

```cpp
// Multiplication
int prod {number1 * number2};
int other_prod = number1 * number2 * number1;

std::cout << "The prod is: " << prod << std::endl;
std::cout <<"Other prod is: " << other_prod << std::endl;
```

### Division

```cpp
// Division
int div {number1 / number2};
int other_div = number1 / number2 / number1;

std::cout << "The div is: " << div << std::endl;
std::cout <<"Other div is: " << other_div << std::endl;
```

### Modulus

```cpp
// Modulus
int mod {number1 % number2};
int other_mod = number1 % number2 % number1;

std::cout << "The mod is: " << mod << std::endl;
std::cout <<"Other mod is: " << other_mod << std::endl;
```

## Precedence and associativity

> Precedence: Which operator is evaluated first

> Associativity: which direction or which order

`a + b * c - d/e -f + g`

> It is better to make the intent in your code as clear as possible by clearly using parentheses to indicate which operations you want done first

## Prefix and Postfix ( ++ and -- )

> Prefix: ++value

> Postfix: value++

### Regular increment and decrement

```cpp
int value {5};

//Increment by one
value = value + 1;
std::cout << "The value is: " << value << std::endl;

value = 5; // reset value

//Decrement by one
value = value - 1;
std::cout << "The value is: " << value << std::endl;
```

### Postfix increment and decrement

```cpp
value = 5;

std::cout << "The value is (incrementing): " << value++ << std::endl;
std::cout << "The value is (after incrementing): " << value << std::endl;

std::cout << std::endl;

//Decrement with postfix

//Reset value to 5
value = 5;

std::cout << "The value is (decrementing): " << value-- << std::endl;
std::cout << "The value is (after decrementing): " << value << std::endl;
```

### Prefix increment and decrement

```cpp
value = 5;

std::cout << "The value is (incrementing): " << ++value << std::endl;
std::cout << "The value is (after incrementing): " << value << std::endl;

std::cout << std::endl;

//Decrement with prefix

//Reset value to 5
value = 5;

std::cout << "The value is (decrementing): " << --value << std::endl;
std::cout << "The value is (after decrementing): " << value << std::endl;
```

> Prefix and postfix increment/decrement operators are cool

> But they only increment by one, what if we need to increment by a value other than 1, say 5 or 7. We'll see a way to do that in the next lecture

> There is no value** or **value, or //value or value//. They don't make sense, these prefix/postfix operators are only available for + and -, again because that's where they make sense.

## Compound assignment operators

> Compound assignment operators are a shorthand notation to perform an operation and assignment in one step

```cpp
int value {45};

std::cout << "The value is: " << value << std::endl;

std::cout << std::endl;
value += 5; // value = value + 5
std::cout << "The value is (after +=5): " << value << std::endl;

std::cout << std::endl;
value -= 5; // value = value - 5
std::cout << "The value is (after -=5): " << value << std::endl;

std::cout << std::endl;
value *= 5; // value = value * 5
std::cout << "The value is (after *=5): " << value << std::endl;

std::cout << std::endl;
value /= 5; // value = value / 5
std::cout << "The value is (after /=5): " << value << std::endl;

std::cout << std::endl;
value %= 5; // value = value % 5
std::cout << "The value is (after %=5): " << value << std::endl;
```

## Relational operators : Comparing stuff

> Relational operators are used to compare two values

```cpp
int number1{45};
int number2{60};

std::cout << "Number1 is: " << number1 << std::endl;
std::cout << "Number2 is: " << number2 << std::endl;

std::cout << std::endl;
std::cout << "Comparing variables" << std::endl;

std::cout << std::boolalpha; // Make bool show up as true/false instead of 1/0
//Stress the need for parentheses here
std::cout << "Number1 < Number2: " << (number1 < number2) << std::endl;
std::cout << "Number1 <= Number2: " << (number1 <= number2) << std::endl;
std::cout << "Number1 > Number2: " << (number1 > number2) << std::endl;
std::cout << "Number1 >= Number2: " << (number1 >= number2) << std::endl;
std::cout << "Number1 == Number2: " << (number1 == number2) << std::endl;
std::cout << "Number1 != Number2: " << (number1 != number2) << std::endl;
```

## Logical operators

> Logical operators are used to combine relational expressions

### AND (&&) Operator

| a     | b     | a && b |
| ----- | ----- | ------ |
| false | false | false  |
| false | true  | false  |
| true  | false | false  |
| true  | true  | true   |

### OR (||) Operator

| a     | b     | a \|\| b |
| ----- | ----- | -------- |
| false | false | false    |
| false | true  | true     |
| true  | false | true     |
| true  | true  | true     |

### NOT (!) Operator

| a   | b   | !a  | !b  |
| --- | --- | --- | --- |
| 0   | 0   | 1   | 1   |
| 0   | 1   | 1   | 0   |
| 1   | 0   | 0   | 1   |
| 1   | 1   | 0   | 0   |

```cpp
bool a {true};
bool b {false};
bool c {true};

std::cout << std::boolalpha;
std::cout << "a is: " << a << std::endl;
std::cout << "b is: " << b << std::endl;
std::cout << "c is: " << c << std::endl;

//AND : Evaluates to true when all operands are true.
// A single false operand will drag
// the entire expression to evaluating false

std::cout << std::endl;
std::cout << "Basic AND operations" << std::endl;

std::cout << "(a && b) is: " << (a && b) << std::endl;
std::cout << "(a && c) is: " << (a && c) << std::endl;
std::cout << "(a && b && c) is: " << (a && b && c) << std::endl;

//OR : Evaluates to true when any one of the operands is true.
// A single true operand will drag
// the entire expression to evaluating true

std::cout << std::endl;
std::cout << "Basic OR operations" << std::endl;

std::cout << "(a || b) is: " << (a || b) << std::endl;
std::cout << "(a || c) is: " << (a || c) << std::endl;
std::cout << "(a || b || c) is: " << (a || b || c) << std::endl;

//NOT : Evaluates to true when the operand is false

std::cout << std::endl;
std::cout << "Basic NOT operations" << std::endl;

std::cout << "(!a) is: " << (!a) << std::endl;
std::cout << "(!b) is: " << (!b) << std::endl;
std::cout << "(!c) is: " << (!c) << std::endl;

//Combine logical operators in expression
std::cout << "!(a && b) || c is: " << (!(a && b) || c) << std::endl;
```

```cpp
int d{45};
int e{20};
int f{11};

std::cout << std::endl;
std::cout << "Relational and logic operations on integers" << std::endl;
std::cout << "d is: " << d << std::endl;
std::cout << "e is: " << e << std::endl;
std::cout << "f is: " << f << std::endl;

std::cout << std::endl;

std::cout << "(d > e) && (d > f) is: " << ((d > e) && (d> f)) << std::endl;
std::cout << "(d == e) || (e <= f) is: " << ((d == e) || (e <= f)) << std::endl;
std::cout << "(d < e) || (d > f) is: " << ((d < e) || (d > f)) << std::endl;
std::cout << "(f > e) || (d < f) is: " << ((f > e) && (d < f)) << std::endl;
std::cout << "(d > f) && (f <= d) is: " << ((d > f) && (f <= d)) << std::endl;
std::cout << "(d > e) && (d <= f) is: " << ((d > e) && (d <= f)) << std::endl;
std::cout << "(! a) && (d == e) is: " << ((! a) && (d == e)) << std::endl;
std::cout << "(! a) && (d == e) is: " << ((! a) && (d == e)) << std::endl;

```

## Output formatting

> Output formatting is used to format the output of a program

> #include \<iomanip\> is used to include the header file for output formatting

> #include \<ios\> is used to include the header file for input/output streams

### std:endl

> std::endl is used to insert a new line and flush the stream

```cpp
std::cout << "Hello";
std::cout << "World";

std::cout << std::endl;

std::cout << "-----------------------" << std::endl;

std::cout << "Hello" << std::endl;
std::cout << "World" << std::endl;

std::cout << std::endl;

std::cout << "Hello\n";
std::cout << "World\n";
```

### std::flush

> std::flush is used to flush the stream

```cpp
// std::flush : flushes the output buffer to its final destination.
    std::cout << "This is a nice message...." << std::endl
              << std::flush;
    // After this std:flush, we're sure that at this line, the message has been sent to the stream.
    // This may be important in some applications.
```

### std::setw

> std::setw() is used to set the width of the output

```cpp
std::cout << "Unformatted table: " << std::endl;
std::cout << "Daniel" << " " << "Jacks " << 100 << std::endl;
std::cout << "James" << " " << "Smith " << 200 << std::endl;
std::cout << "Frank" << " " << "Jones " << 300 << std::endl;
std::cout << "Larry" << " " << "Jones " << 400 << std::endl;
std::cout << "Jill" << " " << "Smith " << 500 << std::endl;
std::cout << "Jane" << " " << "Jacks " << 600 << std::endl;

std::cout << std::endl;
std::cout << "Formatted table: " << std::endl;
int col_width{14};

    std::cout << std::setw(col_width) << "Name" << std::setw(col_width) << "Surname" << std::setw(col_width) << "Score" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Jacks" << std::setw(col_width) << 100 << std::endl;
    std::cout << std::setw(col_width) << "James" << std::setw(col_width) << "Smith" << std::setw(col_width) << 200 << std::endl;
    std::cout << std::setw(col_width) << "Frank" << std::setw(col_width) << "Jones" << std::setw(col_width) << 300 << std::endl;
    std::cout << std::setw(col_width) << "Larry" << std::setw(col_width) << "Jones" << std::setw(col_width) << 400 << std::endl;
    std::cout << std::setw(col_width) << "Jill" << std::setw(col_width) << "Smith" << std::setw(col_width) << 500 << std::endl;
    std::cout << std::setw(col_width) << "Jane" << std::setw(col_width) << "Jacks" << std::setw(col_width) << 600 << std::endl;


//Rigth Justified
    std::cout << " Right Justified table (default) :" << std::endl;
    col_width = 20;

    std::cout << std::right;
    std::cout << std::setw(col_width) << "Name" << std::setw(col_width) << "Surname" << std::setw(col_width) << "Score" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Jacks" << std::setw(col_width) << 100 << std::endl;
    std::cout << std::setw(col_width) << "James" << std::setw(col_width) << "Smith" << std::setw(col_width) << 200 << std::endl;
    std::cout << std::setw(col_width) << "Frank" << std::setw(col_width) << "Jones" << std::setw(col_width) << 300 << std::endl;
    std::cout << std::setw(col_width) << "Larry" << std::setw(col_width) << "Jones" << std::setw(col_width) << 400 << std::endl;

//Left Justified
    std::cout << " Right Justified table (default) :" << std::endl;
    col_width = 20;

    std::cout << std::left;
    std::cout << std::setw(col_width) << "Name" << std::setw(col_width) << "Surname" << std::setw(col_width) << "Score" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Jacks" << std::setw(col_width) << 100 << std::endl;
    std::cout << std::setw(col_width) << "James" << std::setw(col_width) << "Smith" << std::setw(col_width) << 200 << std::endl;
    std::cout << std::setw(col_width) << "Frank" << std::setw(col_width) << "Jones" << std::setw(col_width) << 300 << std::endl;
    std::cout << std::setw(col_width) << "Larry" << std::setw(col_width) << "Jones" << std::setw(col_width) << 400 << std::endl;


//Internal Justified
//internal justified : sign is left justified, data is right justified
std::cout << std::endl;
std::cout << "Internal Justified" << std::endl;
std::cout << std::right;
std::cout << std::setw(10) << -123.45 << std::endl;
std::cout << std::internal;
std::cout << std::setw(10) << -123.45 << std::endl;

```

### std::setfill

> std::setfill() is used to set the fill character

```cpp
col_width = 20;

std::cout << std::endl;
std::cout << std::setfill('-'); //set fill character to '-'
std::cout << std::setw(col_width) << "Name" << std::setw(col_width) << "Surname" << std::setw(col_width) << "Score" << std::endl;
std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Jacks" << std::setw(col_width) << 100 << std::endl;
std::cout << std::setw(col_width) << "James" << std::setw(col_width) << "Smith" << std::setw(col_width) << 200 << std::endl;
std::cout << std::setw(col_width) << "Frank" << std::setw(col_width) << "Jones" << std::setw(col_width) << 300 << std::endl;
std::cout << std::setw(col_width) << "Larry" << std::setw(col_width) << "Jones" << std::setw(col_width) << 400 << std::endl;
```

### std::boolalpha and std::noboolalpha

> std::boolalpha is used to print true or false instead of 1 or 0

```cpp
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
```

### std::showpos and std::noshowpos

> std::showpos is used to show the positive sign

```cpp
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
```

### std::dec std::oct and std::hex

> std::dec is used to set the base to decimal

> std::oct is used to set the base to octal

> std::hex is used to set the base to hexadecimal

```cpp
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
```

### std::showbase and uppercase

> std::showbase is used to show the base

> std::uppercase is used to show the uppercase

```cpp
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

```

### std::scientific and std::fixed

> std::scientific is used to show the scientific notation

> std::fixed is used to show the fixed notation

```cpp

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
```

### std::setprecision

> std::setprecision is used to set the precision of the floating point numbers

```cpp
//setprecision() : the number of digits printed out for a floating point.
// Default is 6

a = 3.1415926535897932384626433832795;

std::cout << std::endl;
std::cout << "a (default precision(6)) : " << a << std::endl;
std::cout << std::setprecision(10);
std::cout << "a (precision(10)) : " << a << std::endl;
std::cout << std::setprecision(20);
std::cout << "a (precision(20)) : " << a << std::endl;
std::cout << std::setprecision(50);
std::cout << "a (precision(50)) : " << a << std::endl;

//Reset precision to 6
std::cout << std::setprecision(6) << std::endl;
```

### std::showpoint

> std::showpoint is used to show the decimal point

```cpp
//showpoint and noshowpoint : show trailing zeros if necessary
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
```

| Manipulator(s)                       | header      | Purpose                                  |
| ------------------------------------ | ----------- | ---------------------------------------- |
| std::endl                            | \<iostream> | Inserts a newline and flushes the stream |
| std::flush                           | \<iostream> | Flushes the stream                       |
| std::setw                            | \<iomanip>  | Sets the field width                     |
| std::left, std::right, std::internal | \<ios>      | Sets the justification                   |
| std::boolalpha and std::noboolalpha  | \<ios>      | Sets the output format for bools         |
| std::showpos and std::noshowpos      | \<ios>      | Sets the output format for signed types  |
| std::dec, std::hex, std::oct         | \<ios>      | Sets the output format for integers      |
| std::showbase and std::noshowbase    | \<ios>      | Sets the output format for integers      |
| std::uppercase and std::nouppercase  | \<ios>      | Sets the output format for hex and oct   |
| std::scientific and std::fixed       | \<ios>      | Sets the output format for floats        |
| std::setprecision                    | \<iomanip>  | Sets the precision for floats            |
| std::setfill                         | \<iomanip>  | Sets the fill character                  |
| std::showpoint and std::noshowpoint  | \<ios>      | Sets the output format for floats        |

> Reference Doc : http://eng.cppreference.com/w/cpp/io/manip

## Using limits

> #include \<limits>

> std::numeric_limits\<T>::min() : Returns the minimum value of the type T

> std::numeric_limits\<T>::max() : Returns the maximum value of the type T

> std::numeric_limits\<T>::lowest() : Returns the lowest value of the type T

## Math functions

> #include \<cmath>

`Examples :`

> std::abs(x) : Returns the absolute value of x

> std::fabs(x) : Returns the absolute value of x

> std::ceil(x) : Returns the smallest integer that is greater than or equal to x

> std::floor(x) : Returns the largest integer that is less than or equal to x

> std::sqrt(x) : Returns the square root of x

> std::cbrt(x) : Returns the cube root of x

> std::pow(x, y) : Returns x raised to the power of y

> std::hypot(x, y) : Returns the hypotenuse of a right-angle triangle with sides x and y

> std::sin(x) : Returns the sine of x (x is in radians)

> std::cos(x) : Returns the cosine of x (x is in radians)

> std::tan(x) : Returns the tangent of x (x is in radians)

## Weird integral types

> Integral types less than 4 bytes in size don't support arithmetic operations

> The same behavior is present on other operatiors like bitwise shift operator (>> and <<)

# Chapter 3 - Flow control: Conditional programming

> if, else if, else, switch, ternary operator ...

## if statement

> Doing things conditionally is a very common programming task

## Else if

> We can have as many else if statements as we want between the if and else statements

## Switch statement

> The switch statement is a multi-way branch statement

> The break statement after each case is very important. Ot stops processing the switch block when a successful case has been found. If the break statement is not there, all the cases following the current case will be executed.

> condition = Integral types and enums: int, long unsigned short, etc.

## Terenary operator

> The ternary operator is a conditional operator that takes three operands

> result = (condition) ? true_value : false_value;

> The ternary operator is equivalente: if(condition){result = true_value;} else{result = false_value;}

## Loops

> while, do while, for, range-based for

### For loop

> for(initialization; condition; increment){statement;}

> The initialization is executed once, at the beginning of the loop

### Range-based for loop

> for(declaration : range){statement;}

> The range-based for loop is used to iterate through a range of elements in a container

> The range-based for loop is equivalent to: for(auto it = range.begin(); it != range.end(); ++it){declaration = \*it; statement;}

### While loop

> while(condition){statement;}

> The while loop is used to execute a statement or a block of statements while a condition is true

### Do while loop

> do{statement;} while(condition);

> The do while loop is used to execute a statement or a block of statements while a condition is true

> The do while loop is guaranteed to execute at least once

> size_t = Not a type, just a type alias for some unsigned int representation

# Chapter 4 - Arrays, strings, and vectors

## Declaring and using arrays

> Arrays are a collection of elements of the same type stored in contiguous memory locations

`Declaring and initializing arrays`

> int array[5] = {1, 2, 3, 4, 5};

`Array bounds`

> The array bounds must be a constant expression and must be greater than zero
