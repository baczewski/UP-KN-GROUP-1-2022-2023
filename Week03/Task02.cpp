#include <iostream>

bool isRedNumber(int number)
{
    int numberCopy = number, sum = 0;

    while (numberCopy != 0)
    {
        sum = sum + (numberCopy % 10);

        numberCopy = numberCopy / 10;
    }

    return number % sum == 0;
}

bool isGreenNumber(int number)
{
    int numberCopy = number, sum = 0;

    while (numberCopy != 0)
    {
        int lastDigit = numberCopy % 10;
        sum = sum + (lastDigit * lastDigit * lastDigit);

        numberCopy = numberCopy / 10;
    }

    return number == sum;
}

bool checkInterval(int begin, int end)
{
    int counter = 0;

    for (int curr = begin; curr <= end; ++curr)
    {
        if (isRedNumber(curr) || isGreenNumber(curr))
        {
            counter = counter + 1;

            // Може да изнесем тази проверка в края на функцията
            // но ако интервалът ни е мноооого голям
            // по този начин спестяваме много итерации 

            if (counter >= 2) return true;
        }
    }

    return false;
}

int main()
{
    int begin, end;

    std::cout << "Input begin of interval: ";
    std::cin >> begin;

    std::cout << "Input end of interval: ";
    std::cin >> end;

    std::cout << std::boolalpha << checkInterval(begin, end) << "\n";

    return 0;
}