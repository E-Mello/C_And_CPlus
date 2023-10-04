#include <iostream>
#include <string>

int main()
{
    int age;
    std::string completeName;

    // Printing Data
    std::cout << "Please, type in your full name: " << std::endl;
    std::getline(std::cin, completeName);

    std::cout << "Please, type in your age: " << std::endl;
    std::cin >> age;
    std::cout << "Hello " << completeName << " - you are " << age << " years old" << std::endl;

    std::cerr << "Error message: Something is wrong" << std::endl;
    std::clog << "Log message: Something is happened" << std::endl;

    //
    int newAge;
    std::string newCompleteName;

    std::cout << "Please type your name and age: " << std::endl;

    // I can make this
    // std::cin >> newCompleteName >> newAge;
    // or this
    std::cin >> newCompleteName;
    std::cin >> newAge;

    std::cout << "Hello " << newCompleteName << " - you are " << newAge << " years old" << std::endl;

    std::cout << "Now we gonna see data with spaces" << std::endl;
    std::string newCompleteNameWithSpaces;
    int newAgeWithSpaces;

    std::cout << "Please type your name and age: " << std::endl;

    std::getline(std::cin, newCompleteNameWithSpaces);

    std::cin >> newAgeWithSpaces;

    std::cout << "Hello " << newCompleteNameWithSpaces
              << " - you are " << newAgeWithSpaces << " years old" << std::endl;
    return 0;
}