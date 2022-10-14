#include <iostream>

int main()
{
    unsigned int number;

    std::cin >> number;

    int rowLength = number * 2;

    for (int i = 0; i < number; ++i)
    {
        for (int j = 0; j < rowLength; ++j)
        {
            if (j == number - i - 1) std::cout << "/";
            else if (j == number + i) std::cout << "\\";
            else std::cout << " ";
        }

        std::cout << std::endl;
    }

    for (int i = 0; i < rowLength; ++i)
    {
        std::cout << "-";
    }

    std::cout << std::endl;

    for (int i = 0; i < number; ++i)
    {
        for (int j = 0; j < rowLength; ++j)
        {
            if (j == 0 || j == rowLength - 1) std::cout << "|";
            else std::cout << " ";
        }

        std::cout << std::endl;
    }

    for (int i = 0; i < rowLength; ++i)
    {
        std::cout << "=";
    }

    std::cout << std::endl;

    return 0;
}