#include <iostream>

int fac(int number)
{
    int result = 1;

    for (int curr = 1; curr <= number; ++curr)
    {
        result *= curr;
    }

    return result;
}

int pow(int number, int power)
{
    int result = 1;

    for (int curr = 0; curr < power; ++curr)
    {
        result *= number;
    }

    return result;
}

int main()
{
    int x, length;

    std::cout << "Input x: ";
    std::cin >> x;

    std::cout << "Input length: ";
    std::cin >> length;

    double sum = 0;

    for (int curr = 0; curr < length; ++curr)
    {
        double sign = (curr % 2 == 0) ? 1 : -1;

        sum += sign * pow(x, curr * 2) / fac(curr * 2);
    }

    std::cout << sum << std::endl;

    return 0;
}