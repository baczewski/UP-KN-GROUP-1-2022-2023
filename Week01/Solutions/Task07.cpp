#include <iostream>
#include <cmath>

int main()
{
    int number;

    std::cin >> number;

    if (number >= 1 && number <= 100)
    {
        for (int i = 0; i < number; ++i)
        {
            for (int j = 1; j < number + 1; ++j)
            {
                if (j > i) std::cout << j;
                else std::cout << " ";
            }

            std::cout << std::endl;
        }

        for (int i = 1; i < number; ++i)
        {
            for (int j = 0; j < number; ++j)
            {
                if (j < number - i - 1) std::cout << " ";
                else std::cout << j + 1;
            }

            std::cout << std::endl;
        }
    }
    else
    {
        std::cout << "Invalid number: [1..100]" << std::endl;
    }

    return 0;
}