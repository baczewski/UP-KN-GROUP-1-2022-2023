#include <iostream>

const int ARR_MAX_SIZE = 128;

int main()
{
    unsigned int size;

    std::cout << "Size: ";
    std::cin >> size;

    int arr[ARR_MAX_SIZE], dep[ARR_MAX_SIZE];

    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < size; ++i)
    {
        std::cin >> dep[i];
    }

    int platformsNeeded = 1;

    for (int i = 0; i < size; ++i)
    {
        int currPlatformsNeeded = 1;

        for (int j = 0; j < size; ++j)
        {
            if (i != j && arr[i] > arr[j] && dep[j] >= arr[i])
                currPlatformsNeeded = currPlatformsNeeded + 1;
        }

        if (currPlatformsNeeded > platformsNeeded)
            platformsNeeded = currPlatformsNeeded;
    }

    std::cout << platformsNeeded << std::endl;

    return 0;
}