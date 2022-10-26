#include <iostream>

int main()
{
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    for (int curr = 0; curr < 10; ++curr)
    {
        int numberCopy = number, counter = 0;

        while (numberCopy != 0)
        {
            if (numberCopy % 10 == curr)
            {
                ++counter;
            }

            numberCopy = numberCopy / 10;
        }

        std::cout << "Occurrences of " << curr << " = " << counter << "\n";
    }

    return 0;
}