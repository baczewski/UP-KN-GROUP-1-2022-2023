#include <iostream>

int digitsSum(int number);

int main()
{
    std::cout << digitsSum(10) << std::endl;
    std::cout << digitsSum(100) << std::endl;
    std::cout << digitsSum(123456789) << std::endl;

    return 0;
}

int digitsSum(int number)
{
    int sum = 0;

    while (number != 0)
    {
        sum = sum + number % 10;

        number = number / 10;
    }

    return sum;
}