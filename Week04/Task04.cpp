#include <iostream>

const int MAX_ARR_SIZE = 128;

void initArray(int arr[], unsigned int size)
{
    for (int i = 0; i < size; ++i)
        std::cin >> arr[i];
}

bool isArrayMirrored(const int arr[], unsigned int size)
{
    for (int i = 0; i < size / 2; ++i)
    {
        if (arr[i] != arr[size - i - 1])
            return false;
    }

    return true;
}

int main()
{
    unsigned int size;
    std::cin >> size;

    int arr[MAX_ARR_SIZE];

    initArray(arr, size);

    std::cout << std::boolalpha << isArrayMirrored(arr, size) << "\n";

    return 0;
}