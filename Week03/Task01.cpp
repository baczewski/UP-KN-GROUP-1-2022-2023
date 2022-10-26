#include <iostream>

int main()
{
    unsigned int number;

    std::cout << "Input a number: ";
    std::cin >> number;

    int year = number % 10000;
    number = number / 10000;
    
    int month = number % 100;
    number = number / 100;

    int day = number;

    bool isValidDate = true;

    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day > 31) isValidDate = false;
            break;
        case 2:
            if (day > 28) isValidDate = false;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day > 30) isValidDate = false;
            break;
        default:
            isValidDate = false;
    }

    std::cout << std::boolalpha << isValidDate << std::endl;

    return 0;
}