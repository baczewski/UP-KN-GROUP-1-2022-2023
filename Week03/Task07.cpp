#include <iostream>

int main()
{
    int number, targetsNumber;

    std::cout << "Input a number: ";
    std::cin >> number;

    std::cout << "Input targets number: ";
    std::cin >> targetsNumber;

    for (int curr = number - 1; targetsNumber > 0 && curr >= 0; --curr)
    {
        int divisorSum = curr + 1;

        for (int div = 2; div <= curr / 2; ++div)
        {
            if (curr % div == 0)
            {
                divisorSum += div;
            }
        }

        if (divisorSum % 2 != 0)
        {
            --targetsNumber;
            
            std::cout << curr << " ";
        }
    }

    return 0;
}