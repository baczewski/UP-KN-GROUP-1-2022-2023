#include <iostream>

const int MAX_ARR_SIZE = 128;

unsigned int strLength(const char str[])
{
    int result = -1;
    while (str[++result] != '\0');
    return result;
}

unsigned int findSymbolOccurrencesInStr(const char str[], char symbol)
{
    unsigned int counter = 0;

    // изнасяме променливата поради следната причина
    // дължината на низа няма да се променя в следствие изпълнение на програмата
    // следователно няма нужда да бъде изчислявана всеки път

    unsigned int length = strLength(str);

    for (int i = 0; i < length; ++i)
    {
        if (symbol == str[i])
            ++counter;
    }

    return counter;
}

int main()
{
    char str[MAX_ARR_SIZE];

    // ако искаме да вземем и спейсовете от входа
    // можем да използваме std::cin.getline()

    std::cin >> str;

    char symbol;
    std::cin >> symbol;

    std::cout << findSymbolOccurrencesInStr(str, symbol) << "\n";

    return 0;
}