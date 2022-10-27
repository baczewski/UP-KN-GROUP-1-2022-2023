#include <iostream>

unsigned int decToBin(unsigned int number);

int main()
{
    std::cout << decToBin(10) << std::endl;
    std::cout << decToBin(15) << std::endl;
    std::cout << decToBin(20) << std::endl;

    return 0;
}

unsigned int decToBin(unsigned int number)
{
    unsigned int binaryNumber = 0, pos = 1;

    while (number != 0)
    {
        binaryNumber = binaryNumber + (number % 2) * pos;

        pos = pos * 10;

        number = number / 2;
    }

    return binaryNumber;
}