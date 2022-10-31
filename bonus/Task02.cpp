#include <iostream>

const int ARR_MAX_SIZE = 128;

int main()
{
    unsigned int size;

    std::cout << "Size: ";
    std::cin >> size;

    int arr[ARR_MAX_SIZE];

    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }

    bool hasSumArrayWithZeroSum = false;

    for (int i = 0; i < size && !hasSumArrayWithZeroSum; ++i)
    {
        int currentSum = arr[i];

        for (int j = i + 1; j < size && !hasSumArrayWithZeroSum; ++j)
        {
            currentSum += arr[j];

            if (currentSum == 0)
                hasSumArrayWithZeroSum = true;
        }
    }

    std::cout << std::boolalpha << hasSumArrayWithZeroSum << std::endl;

    return 0;
}