#include <iostream>

const int MAX_ARR_SIZE = 128;

void initArray(int arr[], unsigned int size)
{
    for (int i = 0; i < size; ++i)
        std::cin >> arr[i];
}

double findAverageSum(int arr[], unsigned int size)
{
    double elementsSum = 0;

    for (int i = 0; i < size; ++i)
        elementsSum += arr[i];

    return (elementsSum / size);
}

int main()
{
    unsigned int size;
    std::cin >> size;

    int arr[MAX_ARR_SIZE];

    initArray(arr, size);

    double average = findAverageSum(arr, size);

    std::cout << "Average: " << average << "\n";

    return 0;
}