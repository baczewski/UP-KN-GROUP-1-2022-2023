#include <iostream>

int main()
{
    unsigned int begin, end, divisorsCount;

    std::cout << "Input begin: ";
    std::cin >> begin;

    std::cout << "Input end: ";
    std::cin >> end;

    std::cout << "Input number of divisors expected: ";
    std::cin >> divisorsCount;

    bool allHaveKDivisors = true;

    for (int curr = begin; curr <= end; ++curr)
    {
        int currDivCount = 2;

        for (int div = 2; div <= (curr / 2) && currDivCount < divisorsCount; ++div)
        {
            if (curr % div == 0)
            {
                currDivCount += 1;
            }
        }

        if (currDivCount < divisorsCount)
        {
            allHaveKDivisors = false;
            break;
        }
    }

    std::cout << std::boolalpha << allHaveKDivisors << std::endl;

    return 0;
}