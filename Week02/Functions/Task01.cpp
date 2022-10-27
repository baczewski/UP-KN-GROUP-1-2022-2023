#include <iostream>

int max(unsigned int first, unsigned int second);

int main()
{
    std::cout << max(2, 3) << std::endl;
    std::cout << max(5, 20) << std::endl;
    std::cout << max(3, 3) << std::endl;

    return 0;
}

int max(unsigned int first, unsigned int second)
{
    return (first > second ? first : second);
}