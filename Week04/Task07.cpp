#include <iostream>

const int MAX_ARR_SIZE = 128;

unsigned int strLen(const char str[])
{
    int counter = -1;
    while (str[++counter] != '\0');
    return counter;
}

bool isUpperCase(char symbol)
{
    return (symbol >= 'A' && symbol <= 'Z');
}

bool isLowerCase(char symbol)
{
    return (symbol >= 'a' && symbol <= 'z');
}

void swapCaseInStr(char str[])
{
    unsigned int length = strLen(str);

    for (int i = 0; i < length; ++i)
    {
        if (isLowerCase(str[i]))
        {
            str[i] -= 'a' - 'A';
        }
        else if (isUpperCase(str[i]))
        {
            str[i] += 'a' - 'A';
        }
    }
}

int main()
{
    char str[MAX_ARR_SIZE];
    std::cin >> str;

    swapCaseInStr(str);

    std::cout << str;

    return 0;
}