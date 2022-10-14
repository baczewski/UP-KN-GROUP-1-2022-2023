#include <iostream>

int main()
{
    long number;
    int base;

    std::cin >> number >> base;

    int counter = 0;

    while (number >= base)
    {
        number = number / base;

        ++counter;
    }

    std::cout << counter;

    return 0;
}