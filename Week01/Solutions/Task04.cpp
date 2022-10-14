#include <iostream>

int main()
{
    int number;

    std::cin >> number;

    if (number % 2 == 1)
    {
        for (int i = 0; i < number; ++i)
        {
            for (int j = 0; j < number; ++j)
            {
                if (j >= (number - i) / 2 && j <= (number + i) / 2)
                {
                    std::cout << "# ";
                }
                else
                {
                    std::cout << " ";
                }
            }

            std::cout << std::endl;
        }
    }

    return 0;
}