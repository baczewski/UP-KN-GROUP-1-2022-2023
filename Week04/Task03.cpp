#include <iostream>

const int MAX_ARR_SIZE = 128;

void initArray(int arr[], unsigned int size)
{
    for (int i = 0; i < size; ++i)
        std::cin >> arr[i];
}

int findElementOccurrencesInArray(const int arr[], unsigned int size, int elem)
{
    unsigned int occurrences = 0;

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == elem)
            ++occurrences;
    }
    
    return occurrences;
}

void printElementOccurrencePossitions(const int arr[], unsigned int size, int elem)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == elem)
            std::cout << i << " ";
    }
}

int main()
{
    unsigned int size;
    std::cin >> size;

    int elem, arr[MAX_ARR_SIZE];

    initArray(arr, size);

    std::cin >> elem;

    unsigned int occurrences = findElementOccurrencesInArray(arr, size, elem);

    if (occurrences != 0)
    {
        std::cout << "Element contained in the array.\nPositions: ";

        printElementOccurrencePossitions(arr, size, elem);
    }
    else
    {
        std::cout << "Element not contained in the array.\n";
    }

    return 0;
}