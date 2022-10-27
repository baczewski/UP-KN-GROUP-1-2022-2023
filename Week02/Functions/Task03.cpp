#include <iostream>

bool isLetter(char symbol);

int main()
{
    std::cout << isLetter('c') << std::endl;
    std::cout << isLetter('#') << std::endl;
    std::cout << isLetter('K') << std::endl;

    return 0;
}

bool isLetter(char symbol)
{
    return (symbol >= 'A' && symbol <= 'Z') ||
        (symbol >= 'a' && symbol <= 'z');
}