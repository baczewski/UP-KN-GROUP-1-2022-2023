#include <iostream>

bool isDigit(char symbol);

int main()
{
    std::cout << isDigit('3') << std::endl;
    std::cout << isDigit('F') << std::endl;

    return 0;
}

bool isDigit(char symbol)
{
    return (symbol >= '0' && symbol <= '9');
}