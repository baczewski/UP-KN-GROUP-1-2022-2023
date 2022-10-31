#include <iostream>
#include <algorithm>

const int ARR_MAX_SIZE = 128;

int main()
{
    unsigned int size, studentsCount;

    std::cout << "Size: ";
    std::cin >> size;

    unsigned int arr[ARR_MAX_SIZE];

    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }

    std::cout << "Students count: ";
    std::cin >> studentsCount;

    // В случая използваме вградената сортировка
    // понеже по-натам ще говорим за сортировки
    // включена е в <algorithm> библиотеката

    std::sort(arr, arr + size);

    int minDifference = INT_MAX;

    // Итерираме през всички подмасиви с дължина studentsCount
    // като намираме възможно най-малката сума на всеки такъв масив
    // тя се формира като разликата на последния и първия му елементи

    for (int i = 0; i < size - studentsCount + 1; ++i)
    {
        int currentDiff = arr[i + studentsCount - 1] - arr[i];

        if (currentDiff < minDifference)
            minDifference = currentDiff;
    }

    std::cout << minDifference << std::endl;

    return 0;
}