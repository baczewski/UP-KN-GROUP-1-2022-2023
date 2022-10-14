#include <iostream>

int main()
{
    int number;

    std::cin >> number;

    int counter = 1, line = 1;

    while (counter <= number)
    {
        for (int i = 0; i < line; ++i)
        {
            if (counter > number)
            {
                break;
            }

            std::cout << counter << " ";
            ++counter;
        }
        
        ++line;

        std::cout << std::endl;
    }

    return 0;
}