#include <iostream>

unsigned int pow(unsigned int number, unsigned int power);

int sqrt(unsigned int number);

int main()
{
    std::cout << pow(2, 3) << "\n";
    std::cout << pow(7, 0) << "\n";
    std::cout << pow(4, 5) << "\n";

    std::cout << sqrt(25) << "\n";
    std::cout << sqrt(81) << "\n";
    std::cout << sqrt(27) << "\n";

    return 0;
}

unsigned int pow(unsigned int number, unsigned int power)
{
    unsigned int result = 1;

    while (power > 0)
    {
        result *= number;
        --power;
    }

    return result;
}

int sqrt(unsigned int number)
{
    for (int curr = 1; curr * curr <= number; ++curr)
    {
        if (curr * curr == number)
        {
            return curr;
        }
    }

    return -1;
}