#include <iostream>

int main()
{
    int number;

    std::cin >> number;

    for (int i = 0; i < number; ++i)
    {
        for (int j = 0; j < i + 1; ++j)
        {
            std::cout << "#";
        }

        std::cout << std::endl;
    }

    return 0;
}