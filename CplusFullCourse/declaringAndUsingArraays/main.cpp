#include <iostream>

int main()
{

    // Declare an array of ints
    int scores[10]; // 10 elements of type int

    // Read data into the array
    std::cout << "scores[0]: " << scores[0] << std::endl;
    std::cout << "scores[1]: " << scores[1] << std::endl;

    std::cout << "--------------------------------------------------------------------------------" << std::endl;

    // Read with a loop
    for (size_t i{0}; i < 10; i++)
    {
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }

    std::cout << "--------------------------------------------------------------------------------" << std::endl;

    // Write data into the array
    scores[0] = 100;
    scores[1] = 200;
    scores[2] = 300;
    scores[3] = 400;
    scores[4] = 500;
    scores[5] = 600;
    scores[6] = 700;
    scores[7] = 800;
    scores[8] = 900;
    scores[9] = 1000;

    // Print the array data
    for (size_t i{0}; i < 10; i++)
    {
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }

    std::cout << "--------------------------------------------------------------------------------" << std::endl;

    // Other print method
    for (int score : scores)
    {
        std::cout << score << std::endl;
    }

    std::cout << "--------------------------------------------------------------------------------" << std::endl;

    // More methods to print
    for (size_t i{0}; i < 10; ++i)
    {
        scores[i] = i * 10;
    }

    for (int score : scores)
    {
        std::cout << "score: " << score << std::endl;
    }

    return 0;
}