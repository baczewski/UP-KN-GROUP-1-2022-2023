#include <iostream>

int getWithDiscount(unsigned int price, unsigned int percent);

int main()
{
    std::cout << getWithDiscount(100, 50) << std::endl;
    std::cout << getWithDiscount(30, 10) << std::endl;

    return 0;
}

int getWithDiscount(unsigned int price, unsigned int percent)
{
    return (price - price * (percent / 100.0));
}