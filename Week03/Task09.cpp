#include <iostream>

int main()
{
    unsigned int length, sum = 0, curr = 0;

    std::cout << "Input length: ";
    std::cin >> length;

    while (length > 0)
    {
        curr = (curr * 10) + 1;
        sum += curr;

        --length;
    }

    std::cout << sum << std::endl;

    return 0;
}