#include <iostream>
#include <cmath>

int main()
{
    int first, second;

    std::cin >> first >> second;

    int firstNumberDigits = (int)log10(first) + 1;
    int secondNumberDigits = (int)log10(second) + 1;

    if (firstNumberDigits == secondNumberDigits)
    {
        int counter = 0;

        for (int i = 0; i < firstNumberDigits; ++i)
        {
            int firstNumLastDigit = first % 10;
            int secondNumLastDigit = second % 10;

            if (firstNumLastDigit == secondNumLastDigit)
            {
                ++counter;
            }

            first = first / 10;
            second = second / 10;
        }

        std::cout << counter << std::endl;
    }
    else
    {
        std::cout << "Invalid numbers." << std::endl;
    }

    return 0;
}