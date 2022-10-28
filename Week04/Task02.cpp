#include <iostream>

const int MAX_ARR_SIZE = 128;

void initArray(int arr[], unsigned int size)
{
    for (int i = 0; i < size; ++i)
        std::cin >> arr[i];
}

void printArray(const int arr[], unsigned int size)
{
    for (int i = 0; i < size; ++i)
        std::cout << arr[i] << " ";

    std::cout << "\n";
}

void reverseArray(int arr[], unsigned int size)
{
    for (int i = 0; i < size / 2; ++i)
        std::swap(arr[i], arr[size - i - 1]);
}

int main()
{
    unsigned int size;
    std::cin >> size;

    int arr[MAX_ARR_SIZE];

    initArray(arr, size);
    printArray(arr, size);

    reverseArray(arr, size);
    printArray(arr, size);

    return 0;
}