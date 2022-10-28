#include <iostream>

const int MAX_ARR_SIZE = 128;

void initArray(int arr[], unsigned int size)
{
    for (int i = 0; i < size; ++i)
        std::cin >> arr[i];
}

bool checkIfDigitsProductIsSingleDigitNumber(int number)
{
    int digitProduct = 1;

    while (number != 0)
    {
        digitProduct *= number % 10;

        number /= 10;
    }

    return (digitProduct >= 0 && digitProduct <= 9);
}

unsigned int findSingleDigitNumberProductCount(const int arr[], unsigned int size)
{
    unsigned int counter = 0;

    for (int i = 0; i < size; ++i)
    {
        if (checkIfDigitsProductIsSingleDigitNumber(arr[i]))
            ++counter;
    }

    return counter;
}

int main()
{
    unsigned int size;
    std::cin >> size;

    int arr[MAX_ARR_SIZE];

    initArray(arr, size);

    unsigned int result = findSingleDigitNumberProductCount(arr, size);

    if (result != 0)
    {
        std::cout << "Numbers count: " << result << "\n";
    }
    else
    {
        std::cout << "Numbers not found.\n";
    }

    return 0;
}